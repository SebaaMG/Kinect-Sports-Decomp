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
extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_828B6C80();
extern int fn_828B9180();
extern unsigned int uStack_70;


void fn_828B7568(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  double dVar9;
  double dVar10;
  undefined1 uStack_70;
  undefined4 auStack_68 [26];
  
  puVar3 = param_1;
  if (param_1 != param_2) {
    while (puVar3 = puVar3 + 2, puVar3 != param_2) {
      uVar7 = 0;
      uVar6 = 0;
      if (auStack_68 != puVar3) {
        uVar6 = puVar3[1];
        puVar3[1] = 0;
        uVar7 = *puVar3;
        *puVar3 = 0;
      }
      uVar5 = *param_1;
      dVar9 = (double)fn_828B9180(uVar7);
      dVar10 = (double)fn_828B9180(uVar5);
      puVar8 = puVar3;
      if (dVar9 <= dVar10) {
        while( true ) {
          puVar1 = puVar8 + -2;
          uVar5 = *puVar1;
          dVar9 = (double)fn_828B9180(uVar7);
          dVar10 = (double)fn_828B9180(uVar5);
          if (dVar9 <= dVar10) break;
          uVar4 = 0;
          uVar5 = 0;
          if (auStack_68 != puVar1) {
            uVar5 = puVar8[-1];
            puVar8[-1] = 0;
            uVar4 = *puVar1;
            *puVar1 = 0;
          }
          iVar2 = puVar8[1];
          puVar8[1] = uVar5;
          *puVar8 = uVar4;
          puVar8 = puVar1;
          if (iVar2 != 0) {
            fn_822315A0();
          }
        }
        iVar2 = puVar8[1];
        puVar8[1] = uVar6;
        *puVar8 = uVar7;
      }
      else {
        fn_828B6C80(param_1,puVar3,puVar3 + 2,uStack_70);
        iVar2 = param_1[1];
        param_1[1] = uVar6;
        *param_1 = uVar7;
      }
      if (iVar2 != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}

