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
extern int fn_82547C80();
extern int fn_827F6458();
extern int fn_827F64C8();


void fn_82554B28(int param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  double dVar9;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(iVar6 + *(int *)(param_1 + 400));
      iVar1 = *(int *)(iVar3 + 0x114);
      if ((iVar1 != 0) && (*(int *)(iVar3 + 0x15c) != 0)) {
        lVar4 = fn_827F6458(iVar1);
        lVar8 = 0;
        if (0 < lVar4) {
          puVar7 = (uint *)(iVar3 + 0x118);
          do {
            puVar7 = puVar7 + 1;
            uVar2 = *puVar7;
            dVar9 = (double)fn_827F64C8(iVar1,lVar8);
            fn_82547C80(param_2 + 0xd0,uVar2 & 0xff,(int)(float)(longlong)dVar9 & 0xff);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)lVar4);
        }
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0x18c));
  }
  return;
}

