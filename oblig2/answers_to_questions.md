# Oblig 2, svar på spørsmål

**1.** *En del av klassene inneholder en del `protected` datamedlemmer. Er dette lurt? Nevn noen fordeler og ulemper, og hvordan dette kunne vært gjort anderledes for å unngå ulempene.*
  
**Svar**: At datamedlemmer er protected betyr at subklasser kan bruke medlemmene direkte. Det betyr at variablene kan endres fra alle subklasser, og kan på den måten ødlegge for andre subklasser. På en annen side er det lettere å sette en variabel/funksjon protected i stede for å bruke settere og gettere. Standard konvensjon er at man bruker settere og gettere.

**2.** *Anta at vi ønsket å implementere fyrverkeriet med et annet grafikkbibliotek, `fancyGraphics`. Hva kunne vært gjort anderledes i designet for at dette skulle kunne blitt gjort enklere?*
  
**Svar**: Hvis man skulle gjort det mer generisk kunne man implementert `animation _canvas` slik at den ikke var avhengig av fltk. Da blir den generiske delen av fyrverkeriet (`animated` og `animation_canvas`) enda mer generisk, og det blir derfor lettere å bytte grafikkbibliotek.

**3.** *Basert på ditt forrige svar; hvis du skulle laget ett eller flere "namespaces" i dette prosjektet, hvilke skulle det vært? Hvilke filer skulle vært med i hvilket namespace og hvilke filer skulle hatt `using namespace ...` for de ulike (hvis flere) namespacene?*

**Svar**: Man kunne for eksempel laget et namespace for dotter og raketter som vi kalte 'rockets'. I dette namespacet kunne vi inkludert `class_has_color`, `class_is_vector`, `class_dot` og `class_rocket`. Filen `class_animation_canvas` kunne da brukt `using namespace rocket`. Filene `class_animated` og `class_animation_canvas` kunne også vært et eget namespace. Det namespacet kunne vi brukt i `class_fireworks`.  

**4.** *Klassene `animated` og `animation_canvas` legger opp til polymorfi. Kunne `animation_canvas` vært implementert med templates i stedet? Hva ville vært fordeler og ulemper?*

**Svar**: Ja, det kunne den. Nå er det sånn at det vi vanligvis kaller polymorfi helst kalles dynamisk polymorfi og bruk at templates kalles statisk polymorfi. Det betyr at du gir et template parameter 'compile time', mens man i dynamisk polymorfi gir parameteret runtime. Fordelen er at det da kan kjøre litt bedre/får bedre ytelse, og man ka gjøre det mer generisk. Ulempene er at syntaksen kan være en smule kompleks, det tar lenger tid å kompilere og feilmeldingene er vanskeligerer å forstå.

**5.** *Bortsett fra det du har diskutert, ser du andre svakheter i designet, eller andre ting du ville gjort anderledes?*

**Svar**: Nei.