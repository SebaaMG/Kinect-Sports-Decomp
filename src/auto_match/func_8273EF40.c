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
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826A7398();
extern int fn_826B32D0();
extern int fn_8273CA78();
extern int fn_8273EA00();


void fn_8273EF40(int param_1)

{
  char cVar6;
  ulonglong uVar1;
  int iVar4;
  int *piVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar7;
  
  cVar6 = fn_82695468(param_1,0x2a);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edc0,0,0);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
      uVar1 = fn_826B32D0(*(int *)(param_1 + 0x18),*(undefined4 *)(iVar4 + 0x2a0),iVar4 + 0xc,
                                0,0xffffffffffffffff);
      fn_8273CA78(uVar7,*(undefined4 *)(param_1 + 0x18),uVar1);
      iVar4 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
      piVar5 = (int *)(**(code **)(*(int *)(iVar4 + 8) + 0xc))((int *)(iVar4 + 8),0x25);
      if (piVar5 != (int *)0x0) {
        iVar4 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
        uVar2 = (**(code **)(*(int *)(iVar4 + 8) + 0xc))((int *)(iVar4 + 8),10);
        uVar3 = (**(code **)(*piVar5 + 8))(piVar5,uVar7 + 0x30,uVar7 + 0x34,uVar2);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar2);
        }
        fn_8273EA00(uVar7,*(undefined4 *)(param_1 + 0x18),uVar3);
        if ((uVar3 & 0xffffffff) != 0) {
          fn_8267C498(uVar3);
        }
        fn_8267C4F0(piVar5);
      }
      if ((uVar1 & 0xffffffff) != 0) {
        fn_826824B0(uVar1);
      }
    }
  }
  return;
}

