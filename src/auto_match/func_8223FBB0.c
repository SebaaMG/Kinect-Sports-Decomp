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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_48;
extern int fn_8223EE28();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_8223FD30();
extern int fn_8223FE60();
extern int fn_82240070();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


int * fn_8223FBB0(int *param_1,undefined8 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  char cStack_44;
  char acStack_40 [64];
  
  uVar5 = 0;
  fn_8223FD30(auStack_48,param_1);
  if (cStack_44 != '\0') {
    uVar1 = **(uint **)((int)param_1 + *(int *)(*param_1 + 4) + 0x30);
    uStack_50 = uVar1;
    fn_8223F508(uVar1);
    piVar2 = (int *)fn_8223EE28(&uStack_50);
    if ((uVar1 != 0) && (puVar3 = (undefined4 *)fn_8223F5A0(uVar1), puVar3 != (undefined4 *)0x0))
    {
      (**(code **)*puVar3)(puVar3,1);
    }
    uVar1 = uStack_50;
    uStack_50 = uStack_50 & 0xffffff;
    iVar4 = *(int *)(*param_1 + 4);
    uStack_4c = *(undefined4 *)((int)param_1 + iVar4 + 0x38);
    (**(code **)(*piVar2 + 0x1c))
              (acStack_40,piVar2,CONCAT44(uVar1,uStack_4c) & 0xffffffffffffff,(int)param_1 + iVar4,
               *(undefined1 *)((int)param_1 + iVar4 + 0x40),param_2);
    if (acStack_40[0] != '\0') {
      uVar5 = 4;
    }
  }
  iVar4 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar5 != 0) {
    uVar5 = *(uint *)(iVar4 + 0xc) | uVar5;
    if (*(int *)(iVar4 + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    fn_82240070(iVar4,uVar5,0);
  }
  fn_8223FE60(auStack_48);
  return param_1;
}

