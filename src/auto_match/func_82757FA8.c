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
extern int fn_82757D58();
extern int fn_827AFEE8();
extern int fn_827B00E8();
extern unsigned int iStack_68;
extern unsigned int iStack_74;
extern unsigned int iStack_80;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


void fn_82757FA8(int *param_1,uint param_2,uint param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  
  uVar3 = param_3 - param_2;
  uVar4 = 0;
  if (param_1[1] != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      uVar5 = ((int *)(iVar6 + *param_1))[1] + uVar7;
      if (((param_2 <= uVar7) && (uVar7 < param_3)) || ((uVar7 <= param_2 && (param_2 < uVar5)))) {
        iVar1 = *(int *)(iVar6 + *param_1);
        uVar2 = (ulonglong)*(uint *)(iVar1 + 0x154);
        if (uVar2 == 0) {
          uVar2 = fn_82757D58(iVar1);
        }
        iStack_68 = param_1[4];
        uStack_78 = 0xffffffff;
        iStack_80 = 0;
        uStack_6c = 0;
        uStack_60 = 0;
        uStack_64 = 0;
        uStack_5c = 8;
        if (uVar7 <= param_2) {
          iStack_80 = param_2 - uVar7;
        }
        uStack_7c = *(int *)(iVar6 + *param_1 + 4) - iStack_80;
        if (uVar3 < uStack_7c) {
          uStack_7c = uVar3;
        }
        iStack_74 = iStack_80;
        uStack_70 = uStack_7c;
        if (param_4 == '\0') {
          fn_827B00E8(uVar2,&iStack_80);
        }
        else {
          fn_827AFEE8();
        }
        uVar3 = uVar3 - uStack_7c;
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 8;
      uVar7 = uVar5;
    } while (uVar4 < (uint)param_1[1]);
  }
  return;
}

