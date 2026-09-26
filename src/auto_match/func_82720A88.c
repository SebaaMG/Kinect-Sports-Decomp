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
extern int fn_82681898();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826972E0();
extern int fn_826A7398();


void fn_82720A88(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar4;
  undefined8 uVar3;
  uint uVar5;
  uint uVar6;
  double dVar7;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  piVar4 = (int *)fn_826A7398(*(undefined4 *)(param_1 + 0x18));
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar7 = (double)fn_826972E0(uVar3,uVar2);
    uVar6 = (uint)dVar7;
  }
  uVar5 = (**(code **)(*piVar4 + 0xd0))(piVar4);
  if (uVar6 < uVar5) {
    if (uVar6 < 4) {
      piVar4 = piVar4 + uVar6 * 9 + 0x251;
    }
    else {
      piVar4 = (int *)0x0;
    }
    fn_82681898((double)(uint)piVar4[3],*(undefined4 *)(param_1 + 4));
  }
  return;
}

