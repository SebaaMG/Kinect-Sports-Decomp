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
extern unsigned int *auStack_40;
extern int fn_8223EE28();
extern int fn_8223F560();
extern int fn_8223F5A0();
extern int fn_8223FD30();
extern int fn_8223FE60();
extern int fn_82240070();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


int * fn_828BAD68(int *param_1,undefined2 param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int aiStack_50 [2];
  uint uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  char cStack_3c;
  char acStack_38 [56];
  
  uVar5 = 0;
  fn_8223FD30(auStack_40,param_1);
  if (cStack_3c != '\0') {
    fn_8223F560(aiStack_50,*(int *)(*param_1 + 4) + (int)param_1);
    piVar2 = (int *)fn_8223EE28();
    if ((aiStack_50[0] != 0) &&
       (puVar3 = (undefined4 *)fn_8223F5A0(aiStack_50[0]), puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
    uVar1 = uStack_48;
    uStack_48 = uStack_48 & 0xffffff;
    iVar4 = *(int *)(*param_1 + 4);
    uStack_44 = *(undefined4 *)((int)param_1 + iVar4 + 0x38);
    (**(code **)(*piVar2 + 0x18))
              (acStack_38,piVar2,CONCAT44(uVar1,uStack_44) & 0xffffffffffffff,(int)param_1 + iVar4,
               *(undefined1 *)((int)param_1 + iVar4 + 0x40),param_2);
    if (acStack_38[0] != '\0') {
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
  fn_8223FE60(auStack_40);
  return param_1;
}

