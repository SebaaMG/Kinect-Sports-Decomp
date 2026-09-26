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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82566CA8();
extern int fn_82570B78();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_48;


longlong fn_82570840(int *param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [48];
  
  iStack_4c = fn_82566CA8((double)lbl_821CC160,*(undefined4 *)(*param_1 + 0x844),param_2,4,0,0
                                ,0,*param_1,0);
  if (iStack_4c == 0) {
    lVar3 = -1;
  }
  else {
    *(uint *)(iStack_4c + 0x11c) = (uint)(param_3 != '\0');
    lVar3 = (ulonglong)(uint)param_1[1] + 1;
    puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    iStack_50 = (int)lVar3;
    param_1[1] = iStack_50;
    puVar1 = (undefined4 *)((uint)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    uStack_48 = param_4;
    fn_82570B78(param_1 + 2,&iStack_50);
  }
  return lVar3;
}

