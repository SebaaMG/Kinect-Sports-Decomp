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
extern unsigned int *auStack_58;
extern unsigned int *auStack_90;
extern int fn_82458598();
extern int fn_82F691F0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_82458808(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint auStack_90 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [88];
  
  if (param_1 != param_1 + 4) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 4) = lbl_821CC160;
    fn_82458598(iVar1 + 8);
    fn_82458598(iVar1 + 0x18);
    puVar2 = auStack_90;
    if ((uint)(*(int *)(iVar1 + 0x4c) + *(int *)(iVar1 + 0x48)) <= *(uint *)(iVar1 + 200)) {
      puVar2 = (uint *)(iVar1 + 200);
    }
    auStack_90[0] = *(uint *)(iVar1 + 0x34);
    *(uint *)(iVar1 + 200) = *puVar2;
    puVar2 = auStack_90;
    if (auStack_90[0] <= *(uint *)(iVar1 + 0xcc)) {
      puVar2 = (uint *)(iVar1 + 0xcc);
    }
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    *(uint *)(iVar1 + 0xcc) = *puVar2;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_58,0,0x28);
  }
  return;
}

