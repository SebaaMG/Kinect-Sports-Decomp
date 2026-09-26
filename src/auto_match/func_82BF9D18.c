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
extern int fn_82BF91D8();
extern int fn_82BF9700();
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322ECF8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FCF8;
extern unsigned int lbl_8322FD18;
extern unsigned int lbl_8322FD2C;
extern unsigned int lbl_8322FD30;


undefined8 fn_82BF9D18(undefined4 *param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int aiStack_50 [20];
  
  *param_1 = 0;
  if (lbl_8322FD18 == 0) {
    uVar2 = 0x8002;
  }
  else {
    RtlEnterCriticalSection(0xffffffff83231d48);
    if (lbl_8322FD30 == '\0') {
      lbl_8322FD2C = 0xffff;
      uVar4 = 0;
      puVar5 = (undefined4 *)&lbl_8322FCF8;
      do {
        if (*(short *)(puVar5 + 1) == -1) goto LAB_82bf9db4;
        uVar4 = uVar4 + 0x10;
        puVar5 = puVar5 + 4;
      } while ((uVar4 & 0xffffffff) < 0x10);
      puVar5 = (undefined4 *)0x0;
LAB_82bf9db4:
      if (puVar5 == (undefined4 *)0x0) {
        uVar2 = 0x8006;
      }
      else {
        iVar3 = fn_82BF9700(param_2,aiStack_50);
        if (iVar3 == 0xfffb) {
          uVar2 = 0x8003;
        }
        else if (iVar3 == 0xffff) {
          uVar2 = 0x8007;
        }
        else {
          iVar3 = fn_82BF91D8();
          (&lbl_8322F4F8)[iVar3] = 0xfffd;
          uVar2 = 0;
          (&lbl_8322B4F8)[iVar3] = 0xfffd;
          *param_3 = (ulonglong)*(uint *)(aiStack_50[0] + 0x18);
          *(undefined4 *)(param_3 + 1) = *(undefined4 *)(aiStack_50[0] + 0x1c);
          *(undefined4 *)((int)param_3 + 0xc) = *(undefined4 *)(aiStack_50[0] + 0x20);
          *(undefined4 *)(param_3 + 2) = *(undefined4 *)(aiStack_50[0] + 0x24);
          *(undefined4 *)((int)param_3 + 0x14) = *(undefined4 *)(aiStack_50[0] + 0x28);
          *(uint *)(param_3 + 3) = (uint)*(ushort *)(aiStack_50[0] + 0x14);
          uVar1 = *(undefined4 *)(aiStack_50[0] + 0x18);
          *(undefined2 *)((int)puVar5 + 6) = (&lbl_8322ECF8)[iVar3];
          *puVar5 = uVar1;
          *(short *)(puVar5 + 1) = (short)iVar3;
          *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(aiStack_50[0] + 0xe);
          *(short *)((int)puVar5 + 10) =
               *(short *)(aiStack_50[0] + 0x12) + *(short *)(aiStack_50[0] + 0x10) + 0x2c;
          *(undefined2 *)(puVar5 + 3) = *(undefined2 *)(aiStack_50[0] + 0x14);
          *(undefined1 *)((int)puVar5 + 0xe) = 1;
          *(undefined1 *)((int)puVar5 + 0xf) = 0;
          *param_1 = puVar5;
        }
      }
    }
    else {
      uVar2 = 0x8002;
    }
    RtlLeaveCriticalSection(0xffffffff83231d48);
  }
  return uVar2;
}

