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
extern unsigned int *auStack_60;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


void fn_82DA7590(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  do {
    iVar6 = (param_2 + param_3 >> 1) * 0x10 + param_1;
    uStack_5c = *(undefined4 *)(iVar6 + 4);
    uStack_58 = *(undefined4 *)(iVar6 + 8);
    uStack_54 = *(undefined4 *)(iVar6 + 0xc);
    iVar7 = param_3;
    iVar6 = param_2;
    do {
      iVar5 = iVar6 * 0x10 + param_1;
      cVar2 = (*param_4)(iVar5,auStack_60);
      while (cVar2 != '\0') {
        iVar5 = iVar5 + 0x10;
        iVar6 = iVar6 + 1;
        cVar2 = (*param_4)(iVar5,auStack_60);
      }
      iVar5 = iVar7 * 0x10 + param_1;
      cVar2 = (*param_4)(auStack_60,iVar5);
      while (cVar2 != '\0') {
        iVar5 = iVar5 + -0x10;
        iVar7 = iVar7 + -1;
        cVar2 = (*param_4)(auStack_60,iVar5);
      }
      if (iVar7 < iVar6) break;
      if (iVar7 != iVar6) {
        puVar4 = (undefined4 *)(iVar7 * 0x10 + param_1);
        puVar3 = (undefined4 *)(iVar6 * 0x10 + param_1);
        uVar1 = *puVar4;
        uStack_4c = puVar4[1];
        uStack_48 = puVar4[2];
        uStack_44 = puVar4[3];
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
        puVar4[3] = puVar3[3];
        *puVar3 = uVar1;
        puVar3[1] = uStack_4c;
        puVar3[2] = uStack_48;
        puVar3[3] = uStack_44;
      }
      iVar7 = iVar7 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar7);
    if (param_2 < iVar7) {
      fn_82DA7590(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

