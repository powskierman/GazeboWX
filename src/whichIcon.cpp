#include "whichIcon.h"

int ID = 0;
int num = 0;
int ico = 3;

int whichIcon(int _ID)
  {
      switch (_ID)
      {
      case 200 ... 209:{ico = 3;return ico;break;}
      case 210:{ico = 25;return ico;break;}
      case 211 ... 232:{ico = 3;return ico;break;}
      case 300 ... 321:{ico = 14;return ico;break;}
      case 500:{ico = 17;return ico;break;}
      case 501:{ico = 16;return ico;break;}
      case 502:{ico = 15;return ico;break;}
      case 503 ... 531:{ico = 16;return ico;break;}
      case 600:{ico = 24;return ico;break;}
      case 601:{ico = 19;return ico;break;}
      case 602:{ico = 20;return ico;break;}
      case 603 ... 622:{ico = 19;return ico;break;}
      case 701 ... 781:{ico = 19;return ico;break;}
      case 800:{ico = 26;return ico;break;}
      case 801:{ico = 22;return ico;break;}
      case 802:{ico = 23;return ico;break;}
      case 803 ... 804:{ico = 2;return ico;break;}

    default:return ico;break;
    }
  }
 int whichBigIcon(int _ID)
  {
          switch (_ID)
      {
      case 200 ... 209:{ico = 28;return ico;break;}
      case 210:{ico = 47;return ico;break;}
      case 211 ... 232:{ico = 28;return ico;break;}
      case 300 ... 321:{ico = 35;return ico;break;}
      case 500:{ico = 38;return ico;break;}
      case 501:{ico = 37;return ico;break;}
      case 502:{ico = 36;return ico;break;}
      case 503 ... 531:{ico = 37;return ico;break;}
      case 600:{ico = 46;return ico;break;}
      case 601:{ico = 40;return ico;break;}
      case 602:{ico = 41;return ico;break;}
      case 603 ... 622:{ico = 40;return ico;break;}
      case 701 ... 781:{ico = 40;return ico;break;}
      case 800:{ico = 43;return ico;break;}
      case 801:{ico = 44;return ico;break;}
      case 802:{ico = 45;return ico;break;}
      case 803 ... 804:{ico = 27;return ico;break;}

    default:return ico;break;
    }
  }