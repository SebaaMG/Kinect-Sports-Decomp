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
extern int fn_826957D0();
extern int fn_82696AD0();
extern int fn_826BD928();
extern unsigned int iStack_28;
extern unsigned int lbl_8200BDA0;
extern unsigned int lbl_8200C4D4;
extern unsigned int uStack_2c;


void fn_826C9460(int param_1)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  undefined **ppuStack_30;
  uint uStack_2c;
  int iStack_28;
  
  iVar3 = fn_826BD928(*(undefined4 *)(param_1 + 8));
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = fn_826957D0(param_1,0);
  piVar4 = (int *)fn_82696AD0(uVar2,uVar1);
  uStack_2c = *(uint *)(param_1 + 0x18);
  ppuStack_30 = (undefined **)&lbl_8200BDA0;
  iStack_28 = iVar3;
  (**(code **)(*piVar4 + 0x20))(piVar4,(ulonglong)uStack_2c + 0x78,&ppuStack_30,0,0);
  ppuStack_30 = &lbl_8200C4D4;
  if (iVar3 != 0) {
    fn_8267C498(iVar3);
  }
  return;
}

