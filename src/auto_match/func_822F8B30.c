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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_82240070();
extern int fn_822EF100();
extern int fn_822EF4E0();
extern int fn_822EF668();
extern unsigned int uStack_44;


int * fn_822F8B30(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar6;
  int *piVar4;
  undefined4 *puVar5;
  int iVar7;
  uint uVar8;
  uint auStack_50 [2];
  int *piStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  auStack_50[0] = 0;
  fn_822EF4E0(&piStack_48,param_1);
  piVar2 = piStack_48;
  cVar6 = fn_822EF668(piStack_48,0);
  if (cVar6 != '\0') {
    piVar1 = (int *)**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x30);
    piStack_48 = piVar1;
    fn_8223F508(piVar1);
    piVar4 = (int *)fn_822EF100(&piStack_48);
    if ((piVar1 != (int *)0x0) &&
       (puVar5 = (undefined4 *)fn_8223F5A0(piVar1), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
    uStack_44 = CONCAT13(1,(((U64)(uStack_44) >> 8) & 0xFFFFFF));
    uVar3 = uStack_44;
    iVar7 = *(int *)(*param_1 + 4) + (int)param_1;
    piStack_48 = *(int **)(iVar7 + 0x38);
    uStack_44 = CONCAT13(piStack_48 == (int *)0x0,(((U64)(uStack_44) >> 8) & 0xFFFFFF));
    (**(code **)(*piVar4 + 0x24))
              (auStack_40,piVar4,CONCAT44(piStack_48,uStack_44),uVar3,iVar7,auStack_50,param_2);
  }
  iVar7 = *(int *)(*param_1 + 4) + (int)param_1;
  if (auStack_50[0] != 0) {
    uVar8 = *(uint *)(iVar7 + 0xc) | auStack_50[0];
    if (*(int *)(iVar7 + 0x38) == 0) {
      uVar8 = uVar8 | 4;
    }
    fn_82240070(iVar7,uVar8,0);
  }
  piVar2 = *(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x38);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  return param_1;
}

