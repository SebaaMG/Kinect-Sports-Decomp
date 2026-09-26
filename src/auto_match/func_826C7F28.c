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
extern int fn_8267C4F0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_826ADE60();
extern int fn_826C59F8();


void fn_826C7F28(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  int iVar6;
  int *piVar7;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  iVar4 = fn_826C59F8(param_1);
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      iVar5 = *(int *)(iVar4 + 0x80);
      if (iVar5 == 0) {
        iVar5 = fn_8269F500(iVar4);
      }
      fn_826ADE60(*(undefined4 *)(param_1 + 0x18),0xffffffff8200bda8,
                        **(undefined4 **)(iVar5 + 0xc));
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      iVar5 = fn_82696958(uVar3,uVar2);
      if ((iVar5 != 0) &&
         (iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10), iVar6 == 0x22)) {
        iVar6 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
        piVar7 = (int *)(**(code **)(*(int *)(iVar6 + 8) + 0xc))((int *)(iVar6 + 8),0x23);
        if (piVar7 != (int *)0x0) {
          fn_8267C4F0(piVar7);
          (**(code **)(*piVar7 + 0x14))(piVar7,iVar5,iVar4);
        }
      }
    }
  }
  return;
}

