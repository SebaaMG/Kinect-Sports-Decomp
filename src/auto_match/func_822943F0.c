extern int *piRam832975d4;
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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_8223EEC8();
extern int fn_8223EF38();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_8223FE60();
extern int fn_82240070();
extern int fn_82296A68();
extern int fn_82297CF0();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62988();
extern int abort();
extern unsigned int uStack_64;


int * fn_822943F0(int *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int aiStack_70;
  int *piStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [4];
  char cStack_54;
  char acStack_50 [16];

  uVar7 = 0;
  fn_82297CF0(auStack_58,param_1);
  if (cStack_54 != '\0') {
    iVar6 = **(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x30);
    aiStack_70 = iVar6;
    fn_8223F508(iVar6);
    fn_82F62680(auStack_60,0);
    piVar1 = piRam832975d4;
    piStack_68 = piRam832975d4;
    uVar2 = fn_8223EEC8(0xffffffff8329eb14);
    piVar3 = (int *)fn_8223EF38(&aiStack_70,uVar2);
    piVar8 = piVar3;
    if ((piVar3 == (int *)0x0) && (piVar8 = piVar1, piVar1 == (int *)0x0)) {
      iVar4 = fn_82296A68(&piStack_68,&aiStack_70);
      piVar8 = piStack_68;
      if (iVar4 == -1) {
        abort();
        piVar8 = piVar3;
      }
      else {
        piRam832975d4 = piStack_68;
        fn_8223F508(piStack_68);
        fn_82F62988(piVar8);
      }
    }
    fn_82F626D0(auStack_60);
    if ((iVar6 != 0) &&
       (puVar5 = (undefined4 *)fn_8223F5A0(iVar6), puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
    piVar1 = piStack_68;
    piStack_68 = (int *)((uint)piStack_68 & 0xffffff);
    iVar6 = *(int *)(*param_1 + 4);
    uStack_64 = *(undefined4 *)((int)param_1 + iVar6 + 0x38);
    (**(code **)(*piVar8 + 0x18))
              (acStack_50,piVar8,CONCAT44(piVar1,uStack_64) & 0xffffffffffffff,(int)param_1 + iVar6,
               *(undefined2 *)((int)param_1 + iVar6 + 0x40),param_2);
    if (acStack_50[0] != '\0') {
      uVar7 = 4;
    }
  }
  iVar6 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar7 != 0) {
    uVar7 = *(uint *)(iVar6 + 0xc) | uVar7;
    if (*(int *)(iVar6 + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    fn_82240070(iVar6,uVar7,0);
  }
  fn_8223FE60(auStack_58);
  return param_1;
}
