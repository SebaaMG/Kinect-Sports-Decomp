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
extern int fn_826BD078();
extern unsigned int iStack_50;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_4c;


longlong fn_82755698(int param_1,int param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uStack00000024;
  int iStack_50;
  undefined4 uStack_4c;
  int aiStack_48 [18];
  
  uStack00000024 = param_3;
  iVar2 = fn_826BD078(&stack0x00000024);
  lVar7 = 0;
  iStack_50 = (*(uint *)(param_1 + 0xc) & 0xfffffffc) + 8;
  do {
    iVar4 = fn_826BD078(&iStack_50);
    if (iVar4 == 0) {
      return -1;
    }
    if ((int)lVar7 < param_2) {
LAB_827557d4:
      if (iVar4 == 10) {
        lVar7 = lVar7 + -1;
      }
    }
    else {
      if ((param_4 == '\0') || (iVar4 != iVar2)) {
        if (param_4 == '\0') {
          if ((iVar4 < 0x61) || (iVar3 = iVar4 + -0x20, 0x7a < iVar4)) {
            iVar3 = iVar4;
          }
          if ((iVar2 < 0x61) || (iVar5 = iVar2 + -0x20, 0x7a < iVar2)) {
            iVar5 = iVar2;
          }
          if (iVar3 == iVar5) goto LAB_82755730;
        }
        goto LAB_827557d4;
      }
LAB_82755730:
      aiStack_48[0] = iStack_50;
      uStack_4c = uStack00000024;
      do {
        lVar8 = -1;
        iVar4 = fn_826BD078(&uStack_4c);
        do {
          iVar3 = fn_826BD078(aiStack_48);
          lVar8 = lVar8 + 1;
        } while (iVar3 == 10);
        if (iVar3 == 0) break;
        if (iVar4 == 0) {
          return lVar7;
        }
        if (param_4 == '\0') {
          if ((iVar3 < 0x61) || (iVar5 = iVar3 + -0x20, 0x7a < iVar3)) {
            iVar5 = iVar3;
          }
          if ((iVar4 < 0x61) || (iVar6 = iVar4 + -0x20, 0x7a < iVar4)) {
            iVar6 = iVar4;
          }
          bVar1 = iVar5 == iVar6;
        }
        else {
          bVar1 = iVar3 == iVar4;
        }
      } while (bVar1);
      if (iVar4 == 0) {
        return lVar7;
      }
      if (iVar3 == 0) {
        return -1;
      }
      lVar7 = lVar7 - lVar8;
    }
    lVar7 = lVar7 + 1;
  } while( true );
}

