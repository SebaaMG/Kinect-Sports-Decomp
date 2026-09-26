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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern int fn_82BFE128();
extern int fn_82BFE460();
extern int fn_82BFE530();
extern unsigned int *lbl_831E7B48;
extern unsigned int uStack_38;


void fn_82670D68(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar6;
  ulonglong uVar5;
  ulonglong uVar7;
  int *piVar8;
  int *apiStack_50 [4];
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  
  puStack_40 = (undefined4 *)0x0;
  puStack_3c = (undefined4 *)0x0;
  uStack_38 = 0;
  while( true ) {
    if (*lbl_831E7B48 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = fn_82BFE460();
    }
    puVar4 = puStack_3c;
    puVar3 = puStack_40;
    puVar2 = puStack_40;
    if (iVar6 != 0) break;
    apiStack_50[0] = (int *)0x0;
    uVar5 = fn_82BFE530(*lbl_831E7B48,apiStack_50);
    uVar5 = ((uVar5 & 0xffffffff) >> 0x1f) - 1 & ZEXT48(apiStack_50[0]);
    piVar8 = (int *)uVar5;
    if ((*(char *)(piVar8 + 4) == '\0') ||
       ((uVar1 = piVar8[1], uVar1 == 0 && (uVar1 = piVar8[3], uVar1 == 0)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulonglong)uVar1 + 0x108;
    }
    apiStack_50[0] = piVar8;
    if ((uVar7 & 0xffffffff) != 0) {
      RtlEnterCriticalSection(uVar7);
    }
    iVar6 = (**(code **)(*piVar8 + 4))(uVar5);
    if ((uVar7 & 0xffffffff) != 0) {
      RtlLeaveCriticalSection(uVar7);
    }
    if ((iVar6 == 0) || (iVar6 != 1)) {
      (**(code **)*piVar8)(uVar5,1);
    }
    else {
      fn_8257A9F0(&puStack_40,apiStack_50);
    }
  }
  for (; puVar2 != puVar4; puVar2 = puVar2 + 1) {
    fn_82BFE128(*lbl_831E7B48,*puVar2);
  }
  if (puVar3 != (undefined4 *)0x0) {
    fn_8265CA20(puVar3);
  }
  return;
}

