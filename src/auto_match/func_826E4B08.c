typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267FC98();
extern int fn_826809F0();
extern int fn_826895E8();
extern unsigned char lbl_83155E40[];
extern unsigned int lbl_831E7E64;


undefined8 fn_826E4B08(void)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar2 = fn_8267B890(lbl_831E7E64,0x30,0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_826809F0(uVar2,1,0x39,0x24);
  }
  if ((uVar2 & 0xffffffff) != 0) {
    pcVar6 = lbl_83155E40;
    lVar4 = 0;
    do {
      lVar5 = 0;
      do {
        cVar1 = *pcVar6;
        uVar7 = 0;
        if (cVar1 == '#') {
          uVar7 = 0xffffffffff000000;
        }
        else if (cVar1 == 'a') {
          uVar7 = 0xffffffff80ff00ff;
        }
        else if (cVar1 == 'b') {
          uVar7 = 0xffffffff802020ff;
        }
        else if (cVar1 == 'c') {
          uVar7 = 0xffffffff8000ffff;
        }
        else if (cVar1 == 'g') {
          uVar7 = 0xffffffff8020ff20;
        }
        else if (cVar1 == 'r') {
          uVar7 = 0xffffffff80ff2020;
        }
        else if (cVar1 == 'y') {
          uVar7 = 0xffffffff80ffff00;
        }
        lVar8 = 0;
        do {
          lVar9 = 0;
          do {
            fn_8267FC98(uVar2 + 8,lVar5 + lVar9,lVar4 + lVar8,uVar7);
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < 3);
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < 3);
        lVar5 = lVar5 + 3;
        pcVar6 = pcVar6 + 1;
      } while ((int)lVar5 < 0x39);
      lVar4 = lVar4 + 3;
    } while ((int)pcVar6 < -0x7ceaa0dc);
  }
  uVar3 = fn_8267B890(lbl_831E7E64,0x24,0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = fn_826895E8(uVar3,uVar2,0);
  }
  if ((uVar2 & 0xffffffff) != 0) {
    fn_8267C498(uVar2);
  }
  return uVar7;
}

