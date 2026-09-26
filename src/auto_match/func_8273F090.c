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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826A7398();
extern int fn_8273EA00();


void fn_8273F090(int param_1)

{
  char cVar5;
  int iVar3;
  int *piVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar6;
  
  cVar5 = fn_82695468(param_1,0x2a);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edc0,0,0);
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    if ((uVar6 & 0xffffffff) != 0) {
      iVar3 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
      piVar4 = (int *)(**(code **)(*(int *)(iVar3 + 8) + 0xc))((int *)(iVar3 + 8),0x25);
      if (piVar4 != (int *)0x0) {
        iVar3 = fn_826A7398(*(undefined4 *)(param_1 + 0x18));
        uVar1 = (**(code **)(*(int *)(iVar3 + 8) + 0xc))((int *)(iVar3 + 8),10);
        uVar2 = (**(code **)(*piVar4 + 8))(piVar4,uVar6 + 0x30,uVar6 + 0x34,uVar1);
        if ((uVar1 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar1);
        }
        fn_8273EA00(uVar6,*(undefined4 *)(param_1 + 0x18),uVar2);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_8267C498(uVar2);
        }
        fn_8267C4F0(piVar4);
      }
    }
  }
  return;
}

