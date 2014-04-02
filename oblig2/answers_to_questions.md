# Oblig 2, svar på spørsmål

**1.** *En del av klassene inneholder en del `protected` datamedlemmer. Er dette lurt? Nevn noen fordeler og ulemper, og hvordan dette kunne vært gjort anderledes for å unngå ulempene.*
  
**Svar**: At datamedlemmer er protected betyr at subklasser kan bruke medlemmene direkte. Standard konvensjon er at man bruker settere og gettere.

**2.** *Anta at vi ønsket å implementere fyrverkeriet med et annet grafikkbibliotek, `fancyGraphics`. Hva kunne vært gjort anderledes i designet for at dette skulle kunne blitt gjort enklere?*
  
**Svar**: Hvis man skulle gjort det mer generisk kunne man implementert animation _canvas slik at den ikke var avhengig av fltk. Da blir den generiske delen av fyrverkeriet (animated og animation_canvas) enda mer generisk, og det blir derfor lettere å bytte grafikkbibliotek.

**3.** *Basert på ditt forrige svar; hvis du skulle laget ett eller flere "namespaces" i dette prosjektet, hvilke skulle det vært? Hvilke filer skulle vært med i hvilket namespace og hvilke filer skulle hatt `using namespace ...` for de ulike (hvis flere) namespacene?*

**Svar**: ...

**4.** *Klassene `animated` og `animation_canvas` legger opp til polymorfi. Kunne `animation_canvas` vært implementert med templates i stedet? Hva ville vært fordeler og ulemper?*

**Svar**: Ja, det kunne den. Fordelen er at det antakelig vis ville gått fortere enn å bruke polymorfi.

**5.** *Bortsett fra det du har diskutert, ser du andre svakheter i designet, eller andre ting du ville gjort anderledes?*

**Svar**: Nei.