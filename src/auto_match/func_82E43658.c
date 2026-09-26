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
extern unsigned int lbl_820ED018;
extern unsigned int lbl_820ED028;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


longlong fn_82E43658(int param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  byte abStack_40 [64];
  
  uStack_4c = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if ((param_2 == (int *)0x0) || (param_3 == (longlong *)0x0)) {
    lVar3 = -0x7ff8ffa9;
  }
  else if (*(int *)(param_1 + 0x18) == 0) {
    lVar3 = -0x3ff2c94e;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0xc))(param_2,&uStack_4c,0,&uStack_50);
    if (-1 < (int)lVar3) {
      *param_3 = 0;
      if (uStack_50 < 0x18) {
        lVar3 = -0x3ff2c94f;
      }
      else {
        lVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))
                          (*(int **)(param_1 + 0x18),uStack_4c,uStack_50,abStack_40,&lStack_48);
        if (-1 < lVar3) {
          pbVar4 = abStack_40;
          pbVar5 = (byte *)&lbl_820ED018;
          do {
            bVar1 = *pbVar5;
            bVar2 = *pbVar4;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar5 = pbVar5 + 1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar5 != &lbl_820ED028);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            *param_3 = lStack_48 + 0x32;
          }
          else {
            lVar3 = -0x3ff2c566;
          }
        }
      }
      (**(code **)(*param_2 + 0x10))(param_2);
    }
  }
  return lVar3;
}

