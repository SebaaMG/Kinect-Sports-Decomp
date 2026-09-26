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
extern unsigned int *auStack_50;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_82E5E288(int *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  ushort uVar6;
  ushort auStack_50 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte abStack_30 [48];
  
  auStack_50[0] = 0;
  uStack_40 = lbl_8202E618;
  auStack_50[1] = 0;
  uStack_3c = lbl_8202E61C;
  uStack_38 = lbl_8202E620;
  uStack_34 = lbl_8202E624;
  iVar3 = (**(code **)(*param_1 + 0x98))(param_1,auStack_50);
  if ((-1 < iVar3) && (uVar6 = 0, auStack_50[0] != 0)) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x9c))(param_1,uVar6,&uStack_40,auStack_50 + 1,0,0);
      if (iVar3 < 0) {
        return 0;
      }
      pbVar5 = (byte *)&uStack_40;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != abStack_30);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < auStack_50[0]);
  }
  return 0;
}

