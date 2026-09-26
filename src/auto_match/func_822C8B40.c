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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_822C9D68();
extern int fn_82365BD8();
extern int fn_8260D428();
extern unsigned int iStack_3c;


void fn_822C8B40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  piVar2 = *(int **)(param_1 + 0x14);
  for (piVar4 = *(int **)(param_1 + 0x10); piVar4 != piVar2; piVar4 = piVar4 + 2) {
    iVar1 = *param_2;
    puVar3 = (undefined4 *)(iVar1 + 4);
    if (0xf < *(uint *)(iVar1 + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    iVar1 = fn_8260D428(*piVar4 + 4,0,*(undefined4 *)(*piVar4 + 0x14),puVar3,
                         *(undefined4 *)(iVar1 + 0x14));
    if (iVar1 == 0) break;
  }
  if (piVar4 == *(int **)(param_1 + 0x14)) {
    fn_822C9D68(param_1 + 0x10,param_2);
  }
  else {
    piVar2 = (int *)fn_82365BD8(auStack_40);
    iVar1 = piVar2[1];
    piVar2[1] = piVar4[1];
    piVar4[1] = iVar1;
    iVar1 = *piVar2;
    *piVar2 = *piVar4;
    *piVar4 = iVar1;
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  return;
}

