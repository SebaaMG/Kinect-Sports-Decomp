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
extern unsigned int *auStack_70;
extern int fn_82A529D0();
extern int fn_82A52D78();
extern int fn_82A53688();
extern int fn_82A6C8E8();
extern int fn_82A6CC90();
extern int fn_82C17460();


ulonglong fn_82A57048(int *param_1,uint *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ushort auStack_70 [56];
  
  uVar5 = 0;
  if ((((param_1 == (int *)0x0) || (iVar2 = *param_1, iVar2 == 0)) || (param_2 == (uint *)0x0)) ||
     (param_3 == (int *)0x0)) {
    uVar5 = 0xffffffff80070057;
  }
  else {
    if (param_1[0xad] == 2) {
      param_1[0xad] = 0;
      *param_2 = 0;
      if (*(int *)(iVar2 + 0x48) == 2) goto LAB_82a572b0;
      if (*(int *)(iVar2 + 0x334) == 1) {
        param_1[0xae] = 0;
      }
      if (param_1[0xae] == 0) {
LAB_82a571ac:
        auStack_70[0] = 0;
        uVar5 = fn_82A52D78(param_1,auStack_70,0);
        *param_2 = (uint)auStack_70[0];
        if (*(int *)(*param_1 + 0x1c4) != param_1[0x54]) {
          uVar3 = fn_82A53688(param_1);
          *param_2 = uVar3;
        }
        if ((uVar5 & 0xffffffff) == 0x80040002) {
          fn_82C17460(param_1);
          uVar5 = 0;
          goto LAB_82a572b0;
        }
        if ((int)uVar5 == 4) {
          param_1[0xae] = 1;
          *(undefined4 *)(iVar2 + 0x48) = 6;
          if ((param_1[0xb0] != 0) && (param_4 != (int *)0x0)) {
            uVar3 = fn_82A6CC90(param_1 + 0x38);
            *param_4 = (param_1[0x3f] - param_1[0x3d]) -
                       (((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0));
          }
          goto LAB_82a572b0;
        }
        if ((uVar5 & 0xffffffff) != 0x80040004) {
          *(undefined4 *)(iVar2 + 0x48) = 7;
          if (-1 < (int)uVar5) goto LAB_82a572b0;
          goto LAB_82a572a4;
        }
        if ((param_1[0x4b] != 0) && (param_1[0xb0] == 0)) {
          param_1[0xad] = 0;
          uVar5 = 0;
          goto LAB_82a572b0;
        }
      }
      else {
        iVar4 = 0;
        if ((param_1[0xb0] != 0) && (param_1[0x38] != 0)) {
          fn_82A6C8E8(param_1 + 0x38);
        }
        uVar5 = fn_82A529D0(param_1);
        while ((uVar5 & 0xffffffff) == 0x80040002) {
          fn_82C17460(param_1);
          bVar1 = 1000000 < iVar4;
          iVar4 = iVar4 + 1;
          if (bVar1) goto LAB_82a57158;
          uVar5 = fn_82A529D0(param_1);
        }
        if ((uVar5 & 0xffffffff) != 0x80040004) {
          if ((int)uVar5 < 0) goto LAB_82a572a4;
          param_1[0xae] = 0;
          goto LAB_82a571ac;
        }
LAB_82a57158:
        if ((param_1[0x4b] != 0) && (param_1[0xb0] == 0)) {
          param_1[0xad] = 0;
          uVar5 = 0;
          goto LAB_82a572b0;
        }
      }
      uVar5 = 0;
      param_1[0xad] = ((uint)LZCOUNT(param_1[0x38]) >> 5 ^ 1) + 1;
      goto LAB_82a572b0;
    }
    uVar5 = 0xffffffff8004000a;
  }
LAB_82a572a4:
  if (param_1 == (int *)0x0) {
    return uVar5;
  }
  param_1[0xad] = 0;
LAB_82a572b0:
  if ((((param_1[0xb0] != 0) || (*(int *)(*param_1 + 0x334) != 0)) && (param_1[0xae] != 0)) &&
     (param_1[0xad] == 2)) {
    param_1[0xad] = ((uint)LZCOUNT(param_1[0x38]) >> 5 ^ 1) + 1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = param_1[0xad];
  }
  return uVar5;
}

