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
extern int fn_8223FDB8();
extern int fn_82240070();
extern int fn_822EF598();


undefined8 fn_822EF668(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int aiStack_30 [12];
  
  iVar2 = *(int *)(*param_1 + 4) + (int)param_1;
  if (*(int *)(iVar2 + 0xc) == 0) {
    if (*(int *)(iVar2 + 0x3c) != 0) {
      fn_8223FDB8();
    }
    if ((param_2 == '\0') && ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 1) != 0)) {
      iVar2 = **(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x30);
      aiStack_30[0] = iVar2;
      fn_8223F508(iVar2);
      iVar3 = fn_8223CBE8(aiStack_30);
      if ((iVar2 != 0) &&
         (puVar4 = (undefined4 *)fn_8223F5A0(iVar2), puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(puVar4,1);
      }
      piVar1 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
      if (*(int *)piVar1[8] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)piVar1[0xc];
      }
      if (iVar2 < 1) {
        uVar5 = (**(code **)(*piVar1 + 0x18))();
      }
      else {
        uVar5 = (uint)**(byte **)piVar1[8];
      }
      while (uVar5 != 0xffffffff) {
        if ((*(ushort *)((uVar5 & 0xff) * 2 + *(int *)(iVar3 + 0x10)) & 0x48) == 0)
        goto LAB_822ef7cc;
        uVar5 = fn_822EF598(*(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38));
      }
      iVar2 = *(int *)(*param_1 + 4) + (int)param_1;
      uVar5 = *(uint *)(iVar2 + 0xc) | 1;
      if (*(int *)(iVar2 + 0x38) == 0) {
        uVar5 = *(uint *)(iVar2 + 0xc) | 5;
      }
      fn_82240070(iVar2,uVar5,0);
    }
LAB_822ef7cc:
    iVar2 = *(int *)(*param_1 + 4) + (int)param_1;
    if (*(int *)(iVar2 + 0xc) == 0) {
      return 1;
    }
  }
  uVar5 = *(uint *)(iVar2 + 0xc) | 2;
  if (*(int *)(iVar2 + 0x38) == 0) {
    uVar5 = *(uint *)(iVar2 + 0xc) | 6;
  }
  fn_82240070(iVar2,uVar5,0);
  return 0;
}

