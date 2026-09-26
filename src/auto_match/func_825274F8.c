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
extern int fn_82527F50();
extern int fn_82528210();


undefined8 fn_825274F8(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) goto LAB_82527580;
  if (*(int *)(param_2 + 0x8c0) == 0) {
LAB_8252754c:
    iVar3 = -1;
  }
  else {
    piVar1 = *(int **)(*(int *)(param_2 + 0x8c0) + 0x1b4);
    if (piVar1 == (int *)0x0) goto LAB_8252754c;
    iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,param_3);
  }
  if ((iVar3 != -1) && (iVar4 = fn_82527F50(param_1), iVar4 != 0)) {
    iVar4 = *(int *)(param_1 + 0x1b8);
    *(undefined1 *)(iVar4 + 1) = 2;
    *(int *)(iVar4 + 0xc) = param_2;
    *(undefined1 *)(iVar4 + 2) = 0;
    *(int *)(iVar4 + 4) = iVar3;
  }
LAB_82527580:
  puVar2 = *(undefined1 **)(param_1 + 0x1b8);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = puVar2[1];
    fn_82528210(param_1,*(undefined4 *)(puVar2 + 0xc));
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  return 1;
}

