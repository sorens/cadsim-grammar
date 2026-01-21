# CDL Grammar Specification

## Complete Grammar


```
cdl-file           := [version-directive] (file-def | comment | blank-line)*

version-directive  := "#cdl" ":" integer newline

file-def           := file-type quoted-string newline
                      [properties-block]
                      (file-directive)*

file-type          := "mprt" | "masm" | "mdrw" | "easm"

file-directive     := configuration-block
                    | depends-on-directive
                    | drawing-directive
                    | comment

properties-block   := "properties:" newline (property | comment)*

property           := content-property
                    | metadata-property
                    | content-generate-property

content-property   := "content:" quoted-string

metadata-property  := "metadata:" (metadata-inline | metadata-block)

metadata-inline    := quoted-string "," quoted-string

metadata-block     := newline (metadata-entry)*

metadata-entry     := quoted-string "," quoted-string

content-generate-property := "content_generate:" integer

configuration-block := "configuration:" quoted-string newline (config-directive)*

config-directive   := active-modifier
                    | metadata-property
                    | depends-on-directive
                    | comment

active-modifier    := "active:" boolean

depends-on-directive := "depends-on:" quoted-string [config-selector] newline (ref-modifier | comment)*

config-selector    := "@" quoted-string

ref-modifier       := exclude-from-bom-modifier
                    | hidden-modifier
                    | suppressed-modifier

exclude-from-bom-modifier := "exclude-from-bom:" boolean

hidden-modifier    := "hidden:" boolean

suppressed-modifier := "suppressed:" boolean

drawing-directive  := "drawing-of:" quoted-string

boolean            := "true" | "false"

integer            := [0-9]+

quoted-string      := '"' (string-content | escape-sequence | interpolation)* '"'

string-content     := [^"\\$]+

escape-sequence    := "\\" any-char

interpolation      := "$" identifier ":" quoted-string

identifier         := [A-Za-z_][A-Za-z0-9_]*

comment            := "//" any-char* newline

blank-line         := newline
```

## File Types

| Keyword | Description |
|---------|-------------|
| `mprt`  | Mechanical part definition |
| `masm`  | Mechanical assembly definition |
| `mdrw`  | Mechanical drawing definition |
| `easm`  | Electrical assembly definition |

## Example

```cdl
// Part with configurations
mprt "chocolate_chip"
    properties:
        content: "chocolate chip part"
    configuration: "dark"
    configuration: "Default"
        active: true

// Part with generated content
mprt "raisin"
    properties:
        content_generate: 2000

// Assembly with dependencies
masm "cookie"
    properties:
        content: "cookie assembly"
    configuration: "Default"
        depends-on: "chocolate_chip" @ "dark"
            exclude-from-bom: true
            hidden: false
            suppressed: false

// Drawing referencing an assembly
mdrw "cookie_drawing"
    properties:
        content: "drawing of cookie"
    drawing-of: "cookie"
```

## String Interpolation

Strings support interpolation using the `$IDENTIFIER:"key"` syntax:

```cdl
metadata: "com.config.hello" "hello, $PRP:\"com.config.info\""
```

This references the property `com.config.info` using the `$PRP` interpolation.
