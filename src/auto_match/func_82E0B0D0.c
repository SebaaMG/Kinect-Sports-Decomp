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
extern unsigned int *auStack_80;
extern int fn_82CE4118();
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82E0DF70();
extern int fn_82E162A8();


undefined8 fn_82E0B0D0(int param_1,int *param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    fn_82CE4118();
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  fn_82E162A8(*(undefined4 *)(param_1 + 0x18),0);
  pcVar1 = (char *)(**(code **)(*param_2 + 0x24))(auStack_80,param_2);
  if (*pcVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x2c))(param_2);
  }
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  if ((param_3 & 0xffffffff) == 0) {
    iVar3 = fn_82CE5410();
    param_3 = fn_82CE52E0(*(undefined4 *)(iVar3 + 0x10),0x40);
    fn_82E0DF70(*(undefined4 *)(param_1 + 0x18),param_3);
  }
  iVar3 = (**(code **)(*param_2 + 0x10))(param_2,param_3,0x40);
  if (iVar3 == 0x40) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_82f691f0(auStack_70,0xffffffffffffffff,0x40);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 1;
}

