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
extern int fn_8223CBE8();
extern int fn_8223F508();
extern int fn_8223F5A0();


void fn_8223CC88(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_30 [12];
  
  iVar1 = **(int **)(param_1 + 0x30);
  aiStack_30[0] = iVar1;
  fn_8223F508(iVar1);
  piVar2 = (int *)fn_8223CBE8(aiStack_30);
  if ((iVar1 != 0) && (puVar3 = (undefined4 *)fn_8223F5A0(iVar1), puVar3 != (undefined4 *)0x0)
     ) {
    (**(code **)*puVar3)(puVar3,1);
  }
  (**(code **)(*piVar2 + 0x18))(piVar2,param_2);
  return;
}

