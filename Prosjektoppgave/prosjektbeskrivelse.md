Prosjektbeskrivelse

PAC-MAN

Av: Yrjan Fraschetti og Thomas Nordengen


Hovedfunksjonalitet:

Vi ønser å lage en klone av PAc-Man. 
Programmet skal kunne vise et brett, hvor en med piltaster(eller andre knapper), kan bevege en figur rundt. Dette brette skal inneholde vegger, prikker som kan spises og spøkelser som skal jage pac-man. Spøkelsene skal selv kunne bevege seg fritt på brettet. Spillet skal ligne mest mulig på originalen, det vil si spillfunksjonaliteten, utseendet osv. 

Vi lager progammet i Qt. Programmet skal fungerer på windows, mac og linux. Koden vil kunne bli kjørt via Qt og kompileres med en Makefil.

Brettene det skal spilles på, vil bli tegnet ved hjelp av .png og .gif filer. Disse bildene vil ha identiske størrelser, som igjen kan puttes inn i et større rutenett. Dette rutenettet vil bestemme hvor bildene skal plasseres, og dermed bygge brettet bassert på bildenes posisjon i rutenettet.

Designmål:

Utvidbart: 
	   Ja! Programmet skal kunne utvides slik at en kan legge til andre funksjonaliteter utover det som er standard for pac-man originalen. Det vil være mulig å kunne legge til flere typer brett, eller brett som ikke er harkodet, men som er dynamiske eller automatiske, (tilfeldig genererte brett).

Effektivitet:
	Spillet trenger ikke å være super effektivt. Det vil ikke bli lagt for stor vekt på effektivitetet, det vil si målbar efektivitet. Spillet skal flyte fritt og ikke hakke, men ingen optimalisering med tanke på FPS. Dette fordi det vil ta mye tid å komme frem til den alltid beste algoritmen, som vi heller kan benytte til å utvikle spillet generelle funksjonalitet.

Minne:
	Det eneste kravet er at programmet skal kjøre større elementer på heap, og prøve å benytte pekere mest mulig, slik at programmet ikke trenger å "kopiere" objekter for mye. Dette også fordi vi ønsker å terpe på "core" c++ funksjonalitet.

Modulært:
Vi skal prøve å dele programmet inn i deler (moduler), slik at forksjellige aspekter av programmet blir håndtert hver for seg. For eksempel vil håndtering av grafikk bli håndtert i egen modul, mens logikken for spøkelsene vil ligge i en egen modul.

Avgrensning og Mål:

 - Minimumsmål
 Programmet skal som et minimum tegne ett brett, og man skal kunne styre Pac-Man rundt på brettet. I tilleg skal spøkelsene eksistere og bevege seg rundt på brettet, men trenger ikke å oppføre seg helt likt som i Pac-Man originalen. En skal få Pac-Man følelsen når man spiller. 

- Langsiktige mål
  - Flere brett / vanskeligere levels (spøkelsenes bevegelsesmønster).
  - Få spøkelsene til å fungere opptimalt.
  - Polere grafikken. Med dette menes at spillets generelle grafikk skal se bedre ut, og ikke kunn fungere som et  minimalistisk design for å vise programmets funksjonalitet.
  - Tilfeldige genererte brett.