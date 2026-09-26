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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_822EFBF0();
extern int fn_822F09C0();
extern int fn_82396DA8();
extern int fn_823A73C0();
extern int fn_823AFE00();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


undefined8 fn_822F06B0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  uVar6 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x84);
  if (iVar1 != 0) {
    iVar4 = fn_82396DA8();
    if (iVar4 != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c);
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28);
      puVar5 = (undefined4 *)fn_822EFBF0(auStack_38,iVar1);
      fn_823A73C0(&iStack_40,*puVar5,uVar3,uVar2);
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      if (iStack_40 != 0) {
        fn_823AFE00(*(undefined4 *)(param_1 + 0x24));
        uVar6 = fn_822F09C0((double)*(float *)(iStack_40 + 0x24),
                                  (double)*(float *)(iStack_40 + 0x28),
                                  (double)*(float *)(iStack_40 + 0x2c),param_1,
                                  *(undefined4 *)(iStack_40 + 0x20));
      }
      if (iStack_3c != 0) {
        fn_822315A0();
      }
    }
  }
  return uVar6;
}

