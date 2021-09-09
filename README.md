Si vous aimez mon travail, n'hésitez pas à me soutenir en me payant une 🍺 ou un ☕. Merci 🙂 

[ ![Download](https://user-images.githubusercontent.com/12702322/115148445-e5a40100-a05f-11eb-8552-c1f5d4355987.png) ](https://www.paypal.me/CyrilGuislain)


<br />

**Firmware pour écran BigTreeTech TFT70 3.0 configuré pour FLSUN Super Racer.**

Le firmware Marlin pour FLSUN Super Racer configuré pour cet écran se trouve [ici](https://github.com/Guilouz/Marlin-SuperRacer-SKR2.0-LGX).

Les fichiers STL nécessaires sont disponibles dans le dossier `_STL` [ici](https://github.com/Guilouz/Marlin-SuperRacer-SKR2.0-LGX/tree/main/_STL).

<br />

<img width=600 src="https://user-images.githubusercontent.com/12702322/127702284-d49a7f69-2e76-4b21-a0f3-07d5f7ec3803.jpg" />

<br />

## Mise à jour du firmware

La mise à jour du firmware TFT se fait en trois étapes décrites ci-dessous et comprend jusqu'à quatre éléments :

**ÉLÉMENTS :**

**Élément 1 :** Le firmware binaire (`BIGTREE_TFT*_V*.*.*.bin`). Exemple : `BIGTREE_TFT70_V3.0.27.bin`:

- `BIGTREE_TFT_70`: modèle
- `V3.0`: version matériel
- `27`: version logicielle


**Élément 2 :** Polices et Icônes (dans le dossier `TFT70`) :

Le dossier ROOT pour les polices et les icônes est le dossier TFT70.

Structure du dossier des polices et des icônes :
- `TFT70/font`: polices
- `TFT70/bmp`: icônes


**Élément 3 :** Le fichier de configuration `config.ini`

**Élément 4 :** Un ou plusieurs fichiers de langue **(optionnel)**

**ÉTAPES :**

**Étape 1 :** Copiez le firmware compilé BIGTREE_TFT*_V*.*.*.bin, le dossier TFT43 et le fichier config.ini à la racine d'une carte SD vierge inférieure à 8 Go et formatée en FAT32.

**Optionnel**, copiez un ou plusieurs fichier(s) de langue à la racine de la carte SD. Cela vous permettra de basculer entre l'anglais et la ou les langues téléchargées, en utilisant la fonction Langue dans les menus de l'écran. Il est recommandé de télécharger le minimum de langues afin de limiter l'utilisation de la mémoire. Par défaut l'écran est configuré pour avoir l'anglais et le français.


![Capture d’écran 2021-07-30 à 21 17 52](https://user-images.githubusercontent.com/12702322/127701611-e7833f8c-0edd-4b41-86ce-cdbfa6e403f8.jpg)


**Étape 2 :** Insérez la carte SD dans le port SD de l'écran et réinitialisez ce dernier (ou redémarrez votre imprimante) pour démarrer le processus de mise à jour.

⚠️ Ne pas mettre à jour les icônes et / ou les polices entraîneront des icônes manquantes et / ou du texte illisible ⚠️

<br />

## Processus de mise à jour affiché sur l'écran TFT

Une mise à jour réussie ressemble à ceci sur l'écran :

![Screenshot 2020-09-26 at 22 10 04](https://user-images.githubusercontent.com/54359396/94349526-5abcd400-0045-11eb-993a-afc5b241f4d7.png)

... et le nom des éléments sur la carte SD change comme suit :

![Capture d’écran 2021-07-30 à 21 19 44](https://user-images.githubusercontent.com/12702322/127701813-e0125a0c-1536-4a75-96ef-6f28830f12a2.jpg)


En cas d'échec d'une ou plusieurs parties de la mise à jour, une erreur s'affichera. Suivez les informations à l'écran pour mettre à jour les éléments manquants ou obsolètes.

![Screenshot 2020-10-23 at 14 37 36](https://user-images.githubusercontent.com/54359396/97004894-002c7000-153e-11eb-9951-f493be46af3e.png)

⚠️ Les erreurs lors de la mise à jour ne peuvent pas être ignorées et doivent être résolues avant d'utiliser l'écran ⚠️


**Étape 3 :** Retirez la carte SD de l'écran et redémarrez l'imprimante.

<br />

## Configuration

Bien que déjà configuré pour la FLSUN Super Racer, le fichier **config.ini** peut être modifié en utilisant un simple éditeur de texte (assurez-vous d'utiliser le codage UTF).

Une fois modifié et enregistré, le fichier config.ini peut être installé sans qu'il soit nécessaire d'installer à nouveau le firmware ou le dossier TFT70, à condition que le firmware et le fichier config.ini soient de la même version.


### Modification du fichier de configuration (config.ini)

Pour éditer le fichier **config.ini** suivez les instructions [ici](config_instructions.md).

### Mise à jour de la configuration du firmware


1. Modifiez les paramètres dans le fichier **config.ini**.

2. Copiez le fichier **config.ini** à la racine de la carte SD. (La capacité de la carte SD doit être inférieure ou égale à 8 Go et formatée en FAT32).

3. Insérez la carte SD dans le port SD de l'écran et redémarrez votre imprimante ou appuyez sur le bouton reset de l'écran.

4. L'écran mettra à jour et stockera la configuration à partir du fichier **config.ini**.

5. Assurez-vous de retirer la carte SD de l'écran et de redémarrez l'imprimante.

6. Sur l'écran naviguez dans **Menu - Options - Paramètres** puis accédez à la dernière page. Cliquez ensuite sur **RàZ des paramètres**.

7. Redémarrez l'imprimante pour terminer la mise à jour du fichier config.ini.

<br />

## Menus

|                    Écran d'état DÉSACTIVÉ                    |                    Écran d'état ACTIVÉ                     |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
| ![status screen 0](https://user-images.githubusercontent.com/54359396/103319145-09035b80-4a31-11eb-91d0-dd761a48b6f5.png) | ![Unified Material Main Screen](https://user-images.githubusercontent.com/54359396/98742038-03cd4d00-23ae-11eb-9552-36dc02fe66f4.png) |
| Dans le fichier config.ini définir : General Settings<br/>Enable Status Screen<br/># Select the Main Screen flavour<br/># Options: [Enable: 1, Disable: 0]<br/>**status_screen: 0** | Dans le fichier config.ini définir : General Settings<br/>Enable Status Screen<br/># Select the Main Screen flavour<br/># Options: [Enable: 1, Disable: 0]<br/>**status_screen: 1** |

<br />

## Thèmes

<table>
  <tr>
    <td align="center"><b>Unified Material (thème par défaut)</b></td>
    <td  align="center"><b>The Round Miracle par <a href="https://github.com/Acenotass">Acenotass</a></b></td>
  </tr>
  <tr>
    <td align="center"><img src="https://user-images.githubusercontent.com/54359396/98742038-03cd4d00-23ae-11eb-9552-36dc02fe66f4.png" alt="Unified Material" width ="390" height="260"></td>
   <td align="center"><img src="https://user-images.githubusercontent.com/54359396/99251566-d77e5a00-280d-11eb-9c7a-0e7c0111eedd.png" alt="The Round Miracle" width ="390" height="260"></td>
  </tr>
  <tr>
    <td align="center">Remplacez le dossier 'TFT70' par celui-ci :<br><a href="https://github.com/Guilouz/BTT-TFT70-SuperRacer/files/7132291/TFT70_Unified_Material.zip">TFT70_Unified_Material.zip</a></td>
    <td align="center">Remplacez le dossier 'TFT70' par celui-ci :<br><a href="https://github.com/Guilouz/BTT-TFT70-SuperRacer/files/7132293/TFT70_The_Round_Miracle.zip">TFT70_The_Round_Miracle.zip</a></td>
  </tr>
</table>

<table>
  <tr>
    <td align="center"><b>Hybrid Red Material par <a href="https://github.com/AntoszHUN">AntoszHUN</a></b></b></td>
    <td align="center"><b>Hybrid Mono Material par <a href="https://github.com/bepstein111">bepstein111</a></b></td>
  </tr>
  <tr>
    <td align="center"><img src="https://user-images.githubusercontent.com/54359396/98869176-a995c000-2471-11eb-94da-a0bc41abf3e9.png" alt="Hybrid Red Material"   width ="390" height="260"></td>
   <td align="center"><img src="https://user-images.githubusercontent.com/54359396/110254523-d5dccb80-7f8f-11eb-86a5-2d52ecd7ca4d.png" alt="Hybrid Mono Material" width ="390" height="260"></td>
  </tr>
  <tr>
    <td align="center">Remplacez le dossier 'TFT70' par celui-ci :<br><a href="https://github.com/Guilouz/BTT-TFT70-SuperRacer/files/7132295/TFT70_Hybrid_Red_Material.zip">TFT70_Hybrid_Red_Material.zip</a></td>
    <td align="center">Remplacez le dossier 'TFT70' par celui-ci :<br><a href="https://github.com/Guilouz/BTT-TFT70-SuperRacer/files/7132296/TFT70_Hybrid_Mono_Material.zip">TFT70_Hybrid_Mono_Material.zip</a></td>
  </tr>
</table>

<table>
  <tr>
    <td align="center"><b>Rep Rap Firmware Dark par <a href="https://github.com/xPew">xPew</a></b></b></td>
  </tr>
  <tr>
    <td align="center"><img src="https://user-images.githubusercontent.com/54359396/132403911-067d5cba-942e-496a-9f24-c4b1c9be99d5.png" alt="Rep Rap Firmware Dark"  width ="390" height="260"></td>
  </tr>
  <tr>
    <td align="center">Remplacez le dossier 'TFT70' par celui-ci :<br><a href="https://github.com/Guilouz/BTT-TFT70-SuperRacer/files/7132300/TFT70_Rep_Rap_Firmware_Dark.zip">TFT70_Rep_Rap_Firmware_Dark.zip</a></td>
  </tr>
</table>

<br />

## Afficher plus de statistiques à la fin de l'impression

Des statistiques telles que la longueur du filament, le poids du filament et le coût du filament peuvent être intégrées dans le gCode. 
Une fois l'impression terminée, il y aura une infobox sur laquelle vous pouvez cliquer et une fenêtre contextuelle vous présentera le nom du fichier imprimé (limité aux 25 premiers caractères), le temps nécessaire à l'impression, la longueur du filament utilisé, le poids du filament et son coût. Dans le cas d'une utilisation multi-filament, les statistiques afficheront la somme de toutes les données individuelles (somme des longueurs, somme des poids, somme des coûts).

Les données statistiques dans le gCode doivent avoir le format suivant (une bonne pratique serait de l'inclure au début du gCode) :
* `M118 P0 filament_data L:{12.3456}m`  L: représente la longueur en mètres
* `M118 P0 filemant_data W:{1.23456}g`  W: représente le poids en grammes
* `M118 P0 filament_data C:{0.1234}`    C: représente le coût sans unité

Les valeurs de chaque donnée de filament peuvent être entre crochets, parenthèses, apostrophes, etc. ou sans, les unités de mesure peuvent être présentes ou non.

Donc `M118 P0 filament_data L:(12.3456)m`, `M118 P0 filament_data L:12.3456meters`, `M118 P0 filament_data L:[12.3456]` et ainsi de suite sont tous des formats valides.

Pour les statistiques d'impression multi-filament, les données de chaque filament utilisé doivent être écrites, elles peuvent être séparées par une virgule, un espace, un astérisque, peu importe, sauf ";" et ".".
Exemples pour multi-filament:
* `M118 P0 filament_data L:(12.3456, 8.2520974)m`
* `M118 P0 filament_data W: 24.87652 15.568264 gramm`
* `M118 P0 filament_data C:[1.3456], [0.56024]`

L'inclusion des données de filament dans le gCode peut être automatisée. Dans Cura, tout ce que vous avez à faire est d'insérer ce qui suit dans le Start G-Code :
* `M118 P0 filament_data L:{filament_amount}m`
* `M118 P0 filament_data W:{filament_weight}g`
* `M118 P0 filament_data C:{filament_cost}`

Dans le cas où le fichier gCode a été généré à l'aide du plugin [BTT 3D Plug-In Suit](https://github.com/bigtreetech/Bigtree3DPluginSuit), les données sont automatiquement ajoutées.

Si les données de filament ne sont pas présentes dans le gCode, les données de longueur de filament sont calculées pendant l'impression. La longueur est calculée indépendamment de l'utilisation du port USB du TFT, du port SD du TFT ou du port SD intégré. Les calculs sont effectués en mode d'extrusion absolu ou relatif. Les données de filament tiennent également compte du débit, mais avec une mise en garde. Le débit doit être le même pendant toute la durée de l'impression, car le résultat final est calculé en fonction du débit au moment où l'impression est terminée. Si le débit change pendant l'impression, les résultats ne seront plus précis.

<br />

## Informations Octoprint

- Lors de l’impression via Octoprint, l’écran ne bascule pas en mode « Impression » cependant toutes les fonctionnalités restent accessibles (babysteps, etc...) et les ordres reçus par l’écran (M600, détection de fin de filament, etc...) s’affichent correctement.
- Les actions requises par l’utilisateur peuvent être gérées depuis l’écran ou directement via Octoprint.

<br />

## Détecteur de fin de filament

- Le détecteur de fin de filament fonctionne sans action requise lors de l’impression via les ports microSD/USB de la carte mère ou via Octoprint.
- Pour faire fonctionner le détecteur de fin de filament via les ports SD et USB de l’écran, il faut ajouter la commande **M75** dans le Start gCode et la commande **M77** dans le End gCode de votre Slicer.

<br />

## Reprise après coupure de courant

- La reprise après coupure de courant n’est fonctionnelle que lors de l’impression via les ports SD et USB de l’écran.
- Cette fonctionnalité est activée par défaut, elle créée un fichier nommé PLR à la racine de la carte SD et/ou clé USB qui enregistre l’état au fur et à mesure de l’impression.
- Si vous n’utilisez pas cette fonctionnalité désactivez-la pour préserver la carte SD et/ou clé USB via **Menu - Options - Paramètres - Reprise après coupure**.
- Pour reprendre l’impression après coupure, il suffit de se rendre à nouveau à l’emplacement de votre fichier gCode, l’écran demandera alors si vous désirez reprendre ou non l’impression.

<br />

## Dépannage

**En cas d'échec de mise à jour d'un nouveau firmware**

Tout d'abord, vérifiez que vous avez utilisé la bonne version pour votre écran. Après cela, essayez à nouveau de mettre à jour (comme décrit ci-dessus) en utilisant une **nouvelle** carte SD - 8 Go ou moins, formatée en FAT32. Certaines mises à jour ont bien fonctionné après l'exécution d'un formatage de bas niveau de la carte SD et non d'un formatage rapide.

**Réinitialisation simple**

Pour réinitialiser l'étalonnage tactile de l'écran, créez un fichier vierge nommé "reset" avec l'extension de fichier ".txt" et placez-le dans à la racine d'une carte SD (la capacité de la carte SD doit être inférieure ou égale à 8 Go et formatée en FAT32). Insérez la carte SD dans le port SD de l'écran et redémarrez votre imprimante ou appuyez sur le bouton reset pour démarrer le processus de réinitialisation.

**Pire scénario**

Si l'écran reste noir ou que la luminosité n'est pas stable, l'écran ne réagit pas après avoir appuyé sur un bouton ou exécute des clics par lui-même ou fait quelque chose de similaire - et que la réinitialisation décrite ci-dessus n'a pas aidé - procédez comme suit. Retirez l'écran du boîtier et déconnectez tous les câbles, y compris le câble de la carte mère. Coupez un câble USB dont vous n'avez plus besoin et connectez le fil rouge au 5V et le noir au GND de l'écran. 
N'utilisez pas directement les fils non blindés mais utilisez plutôt un connecteur à 2 broches. Mettez l'écran sous tension et essayez de réinitialiser l'écran ou d'installer un nouveau firmware comme décrit dans ce document. Avec seulement l'alimentation fournie, vous devriez être en mesure de naviguer dans les menus à l'aide de l'écran tactile et même de passer à l'émulation Marlin (si disponible), même si l'écran d'émulation Marlin ne s'affichera pas.
