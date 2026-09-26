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
#define _iStack00000018 ((*(U64*)&iStack00000018))
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_8288BE40();
extern int fn_8288CB08();
extern int fn_8288D188();
extern int fn_8288E548();
extern int fn_82F622A8();
extern unsigned int iStack00000018;
extern unsigned int uStack_40;
extern unsigned int uStack_50;


longlong fn_82890020(int *param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iStack00000018;
  undefined1 uStack_50;
  int aiStack_48 [2];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  iStack00000018 = (int)(param_2 >> 0x20);
  lVar3 = ((ulonglong)(uint)(iStack00000018 - *param_1 >> 2) & 0x7ffffff) * 0x20 +
          (param_2 & 0xffffffff);
  if (param_3 != 0) {
    _iStack00000018 = param_2;
    if (0xffffffffU - param_1[4] < param_3) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82023624);
    }
    fn_8288E548(param_1,param_1[4] + param_3 + 0x1f >> 5,0);
    iVar1 = param_1[4];
    if (iVar1 == 0) {
      param_1[4] = param_3;
    }
    else {
      fn_8288D188(&uStack_40,param_1);
      aiStack_48[0] = *param_1;
      param_1[4] = iVar1 + param_3;
      aiStack_48[1] = 0;
      puVar2 = (undefined8 *)fn_8288D188(auStack_38,param_1);
      uVar4 = *puVar2;
      puVar2 = (undefined8 *)fn_8288BE40(auStack_30,aiStack_48,lVar3);
      fn_8288CB08(&uStack_40,*puVar2,uStack_40,uVar4,uStack_50);
    }
  }
  return lVar3;
}

