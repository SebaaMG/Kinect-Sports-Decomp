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
extern unsigned int *auStack_60;
extern int fn_82F68CC0();
extern unsigned int iStack_5c;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


ulonglong fn_82AA05D8(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar3;
  longlong lVar2;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_60 [4];
  int iStack_5c;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  fn_82F68CC0(auStack_60,param_1,0x30);
  uVar1 = uStack_40;
  uVar5 = 0;
  if (uStack_40 == 1) {
    uVar6 = (ulonglong)uStack_3c;
    if (uVar6 == 0) {
      uVar5 = (longlong)(int)(uint)*(ushort *)(param_3 + 6) *
              (longlong)(int)(uint)*(ushort *)(param_3 + 4);
      if ((iStack_5c == 2) || (iStack_5c == 1)) {
        if ((uVar5 & 3) == 0) {
          uVar5 = uVar5 >> 2;
        }
        else {
          uVar5 = (uVar5 >> 2) + 1;
        }
      }
    }
    else if (uVar6 != 0) {
      piVar4 = (int *)(*(int *)(param_3 + 0xc) + param_2 + -4);
      do {
        piVar4 = piVar4 + 2;
        iVar3 = *piVar4 + param_2;
        uStack_44 = (uint)*(ushort *)(iVar3 + 6);
        uStack_48 = (uint)*(ushort *)(iVar3 + 4);
        uStack_50 = (uint)*(ushort *)(*piVar4 + param_2);
        uStack_4c = (uint)*(ushort *)(iVar3 + 2);
        uStack_40 = (uint)*(ushort *)(iVar3 + 8);
        uStack_3c = (uint)*(ushort *)(iVar3 + 10);
        lVar2 = ((int (*)())fn_82AA05D8)(auStack_60,param_2);
        uVar6 = uVar6 - 1;
        uVar5 = lVar2 + uVar5;
      } while (uVar6 != 0);
    }
  }
  else {
    uStack_40 = 1;
    iVar3 = fn_82AA05D8(auStack_60,param_2,param_3);
    uVar5 = (longlong)iVar3 * (longlong)(int)uVar1;
  }
  return uVar5;
}

