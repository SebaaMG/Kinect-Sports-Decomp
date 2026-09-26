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
extern int fn_828F5390();
extern int fn_828F53E0();
extern int fn_828F59D0();
extern int fn_828FAB00();


undefined8 fn_828F6C70(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  
  pbVar1 = (byte *)*param_2;
  iVar5 = fn_828F5390(param_1,pbVar1);
  iVar5 = (iVar5 + 0x1e) * 4;
  piVar8 = (int *)(iVar5 + param_1);
  iVar5 = *(int *)(iVar5 + param_1);
  do {
    if (iVar5 == 0) {
LAB_828f6d44:
      param_2[3] = *piVar8;
      *piVar8 = (int)param_2;
      return 0;
    }
    puVar2 = (undefined4 *)*piVar8;
    pbVar6 = (byte *)*puVar2;
    pbVar7 = pbVar1;
    do {
      uVar4 = (uint)*pbVar6;
      uVar3 = (uint)*pbVar7;
      if (*pbVar7 == 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar3 == uVar4);
    if ((int)(uVar3 - uVar4) < 0) goto LAB_828f6d44;
    if (uVar3 == uVar4) {
      iVar5 = fn_828F53E0(param_1,puVar2,param_2);
      if (iVar5 == 0) {
        fn_828FAB00(param_1 + 0x18,param_1 + 0x280,0x5ef,0xffffffff820293d4,pbVar1);
      }
      iVar5 = *piVar8;
      *piVar8 = *(int *)(iVar5 + 0xc);
      *(undefined4 *)(iVar5 + 0xc) = 0;
      fn_828F59D0(iVar5,1);
      goto LAB_828f6d44;
    }
    iVar5 = puVar2[3];
    piVar8 = puVar2 + 3;
  } while( true );
}

