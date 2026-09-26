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
extern int fn_825089A0();
extern int fn_825373A0();
extern int fn_8265C9E0();
extern unsigned int lbl_821C083C;


undefined4 * fn_824C2E18(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar6;
  
  puVar4 = (undefined4 *)fn_8265C9E0(0x28);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    *puVar4 = &lbl_821C083C;
    puVar4[1] = iVar1;
    piVar5 = (int *)fn_825089A0();
    uVar2 = (**(code **)(*piVar5 + 0xc))();
    *(undefined8 *)(puVar4 + 2) = uVar2;
    uVar3 = fn_8265C9E0(0x40);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_825373A0(uVar3,*(undefined4 *)(iVar1 + 0x54));
    }
    puVar4[4] = uVar6;
    *(undefined1 *)(puVar4 + 9) = 0;
  }
  *param_1 = puVar4;
  return param_1;
}

