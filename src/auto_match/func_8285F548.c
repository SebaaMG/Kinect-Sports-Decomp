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
extern float fRam832115f0;
extern int fn_827EB1A8();
extern int fn_827EB3B8();
extern int fn_82862150();
extern int fn_82862338();
extern int iRam832115e0;
extern unsigned int uRam832115d4;
extern unsigned int uRam83211614;
extern unsigned int uRam8321161c;


undefined8 fn_8285F548(longlong param_1,byte *param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0x80;
  uVar4 = 0;
  if (uRam83211614 != 0) {
    param_3 = param_3 - param_1;
    do {
      if ((uVar3 & *param_2) != 0) {
        uVar1 = fn_82862338(uRam8321161c,uRam832115d4,uVar4);
        iVar2 = fn_82862150(uVar1,uRam832115d4);
        if (iRam832115e0 == 0) {
          iVar2 = fn_827EB1A8((double)fRam832115f0,*(undefined4 *)(iVar2 + 4),
                                    *(ushort *)(iVar2 + 8) & 0xff,param_1,0xffffffff832115e4);
LAB_8285f5f0:
          if (iVar2 == 2) {
            return 1;
          }
          if (iVar2 != 0) goto LAB_8285f60c;
        }
        else if (iRam832115e0 == 1) {
          iVar2 = fn_827EB3B8(*(undefined4 *)(iVar2 + 4),*(ushort *)(iVar2 + 8) & 0xff,param_1,
                                  0xffffffff832115f4,0xffffffff83211600,param_3 + param_1);
          goto LAB_8285f5f0;
        }
        *param_2 = *param_2 & ~(byte)uVar3;
      }
LAB_8285f60c:
      uVar3 = uVar3 >> 1;
      if (uVar3 == 0) {
        param_2 = param_2 + 1;
        uVar3 = 0x80;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)uRam83211614);
  }
  return 0;
}

