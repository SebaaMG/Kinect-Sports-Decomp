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
extern int fn_82B80EE0();
extern unsigned int lbl_821AAD20;


char fn_82AF4BA8(undefined8 param_1,int param_2,ulonglong param_3,uint param_4,ulonglong param_5,
                  float *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  
  if ((*(uint *)(param_2 + 8) & 0x3f80) == 0x3e00) {
    cVar3 = (-((param_5 & 2) != 0) & 3U) + 1;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    if ((param_3 & 0xffffffff) != 0) {
      uVar4 = 0;
      dVar6 = (double)lbl_821AAD20;
      do {
        dVar5 = (double)fn_82B80EE0(param_2,param_4 >> (uVar4 & 0x3f) & 3,param_5);
        *param_6 = (float)dVar5;
        if (dVar6 <= dVar5) {
          if (dVar6 < dVar5) {
            bVar2 = true;
          }
        }
        else {
          bVar1 = true;
        }
        param_3 = param_3 - 1;
        uVar4 = uVar4 + 2;
        param_6 = param_6 + 1;
      } while (param_3 != 0);
    }
    if ((!bVar1) || (cVar3 = '\x01', !bVar2)) {
      cVar3 = '\x02';
    }
  }
  return cVar3;
}

