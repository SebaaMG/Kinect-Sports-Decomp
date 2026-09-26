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
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_82F68CC0();


void fn_8264EFE0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  fn_82645110();
  iVar5 = param_1 + 0x3500;
  *(undefined4 *)(param_1 + 0x3530) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x3534) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x3538) = *(undefined4 *)(param_1 + 0x3b24);
  *(undefined4 *)(param_1 + 0x353c) = *(undefined4 *)(param_1 + 0x3b20);
  *(undefined4 *)(param_1 + 0x3540) = *(undefined4 *)(param_1 + 0x3b18);
  *(undefined4 *)(param_1 + 0x3544) = *(undefined4 *)(param_1 + 0x3b1c);
  *(undefined4 *)(param_1 + 0x3460) = *(undefined4 *)(param_1 + 0x3468);
  *(int *)(param_1 + 0x3464) = *(int *)(param_1 + 0x346c) + 1;
  fn_82F68CC0(param_1 + 0x3518,iVar5,0x18);
  uVar6 = 0;
  *(int *)(param_1 + 0x3514) = param_1;
  *(undefined4 *)(param_1 + 0x3504) = 0;
  *(undefined4 *)(param_1 + 0x3508) = 0x1080;
  *(undefined4 *)(param_1 + 0x350c) = 0;
  *(undefined4 *)(param_1 + 0x3510) = 0;
  *(undefined4 *)(param_1 + 0x3500) = 0;
  fn_82643B08(iVar5);
  *(int *)(param_1 + 0x3484) = param_1;
  *(undefined4 *)(param_1 + 0x3474) = 0;
  *(undefined4 *)(param_1 + 0x3478) = 0x1080;
  *(undefined4 *)(param_1 + 0x347c) = 0;
  *(undefined4 *)(param_1 + 0x3480) = 0;
  *(undefined4 *)(param_1 + 0x3470) = 0;
  fn_82643B08(param_1 + 0x3470);
  *(int *)(param_1 + 0x34fc) = param_1;
  *(undefined4 *)(param_1 + 0x34ec) = 0;
  *(undefined4 *)(param_1 + 0x34f0) = 0x1080;
  *(undefined4 *)(param_1 + 0x34f4) = 0;
  *(undefined4 *)(param_1 + 0x34f8) = 0;
  *(undefined4 *)(param_1 + 0x34e8) = 0;
  fn_82643B08(param_1 + 0x34e8);
  *(int *)(param_1 + 0x349c) = param_1;
  *(undefined4 *)(param_1 + 0x348c) = 0;
  *(undefined4 *)(param_1 + 0x3490) = 0x1080;
  *(undefined4 *)(param_1 + 0x3494) = 0;
  *(undefined4 *)(param_1 + 0x3498) = 0;
  *(undefined4 *)(param_1 + 0x3488) = 0;
  fn_82643B08(param_1 + 0x3488);
  *(int *)(param_1 + 0x34b4) = param_1;
  *(undefined4 *)(param_1 + 0x34a4) = 0;
  *(undefined4 *)(param_1 + 0x34a8) = 0x1080;
  *(undefined4 *)(param_1 + 0x34ac) = 0;
  *(undefined4 *)(param_1 + 0x34b0) = 0;
  *(undefined4 *)(param_1 + 0x34a0) = 0;
  fn_82643B08(param_1 + 0x34a0);
  *(int *)(param_1 + 0x34cc) = param_1;
  *(undefined4 *)(param_1 + 0x34bc) = 0;
  *(undefined4 *)(param_1 + 0x34c0) = 0x1080;
  *(undefined4 *)(param_1 + 0x34c4) = 0;
  *(undefined4 *)(param_1 + 0x34c8) = 0;
  *(undefined4 *)(param_1 + 0x34b8) = 0;
  fn_82643B08(param_1 + 0x34b8);
  *(int *)(param_1 + 0x34e4) = param_1;
  *(undefined4 *)(param_1 + 0x34d4) = 0;
  *(undefined4 *)(param_1 + 0x34d8) = 0x1080;
  *(undefined4 *)(param_1 + 0x34dc) = 0;
  *(undefined4 *)(param_1 + 0x34e0) = 0;
  *(undefined4 *)(param_1 + 0x34d0) = 0;
  fn_82643B08(param_1 + 0x34d0);
  puVar2 = *(undefined4 **)(param_1 + 0x350c);
  if (*(undefined4 **)(param_1 + 0x3510) < puVar2 + 0x3f) {
    puVar2 = (undefined4 *)fn_82643B08(iVar5);
  }
  *puVar2 = 0x80000000;
  puVar2[1] = *(undefined4 *)(param_1 + 0x3434);
  puVar2[2] = *(undefined4 *)(param_1 + 0x327c);
  iVar5 = *(int *)(param_1 + 0x3370);
  iVar1 = *(int *)(param_1 + 0x3374);
  if (*(int *)(param_1 + 0x327c) != 0) {
    piVar3 = puVar2 + 2;
    piVar4 = (int *)(param_1 + 0x327c);
    do {
      uVar6 = uVar6 + 1;
      piVar3[1] = piVar4[1] - iVar5;
      piVar3[2] = piVar4[2] - iVar1;
      piVar3[3] = piVar4[3] - iVar5;
      piVar4 = piVar4 + 4;
      piVar3 = piVar3 + 4;
      *piVar3 = *piVar4 - iVar1;
    } while (uVar6 < *(uint *)(param_1 + 0x327c));
  }
  *(undefined4 **)(param_1 + 0x350c) = puVar2 + 0x3f;
  return;
}

