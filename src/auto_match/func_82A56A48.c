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
extern unsigned int uStack_5e;


undefined8 fn_82A56A48(int *param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 uStack_5e;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x5a];
  if ((param_1[0x59] != 0) && (uVar1 = *(ushort *)(iVar2 + 0x6e), 0 < (int)param_3)) {
    iVar5 = param_2;
    do {
      lVar7 = 0;
      if (0 < iVar3) {
        puVar6 = (undefined2 *)(param_2 + -2);
        do {
          iVar4 = (**(code **)(iVar2 + 0x20c))
                            (iVar5,*(undefined4 *)(iVar2 + 0x58),*(undefined2 *)(iVar2 + 0x6e),lVar7
                            );
          lVar7 = lVar7 + 1;
          uStack_5e = (undefined2)(iVar4 >> (uVar1 - 0x10 & 0x3f));
          puVar6 = puVar6 + 1;
          *puVar6 = uStack_5e;
        } while ((int)lVar7 < iVar3);
      }
      param_3 = param_3 + -1;
      param_2 = iVar3 * 2 + param_2;
      iVar5 = iVar3 * *(int *)(iVar2 + 0x58) + iVar5;
    } while (param_3 != 0);
  }
  return 0;
}

