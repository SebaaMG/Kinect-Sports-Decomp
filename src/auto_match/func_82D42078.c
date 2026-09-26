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
extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


ulonglong fn_82D42078(int *param_1,ulonglong param_2)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [576];
  
  uVar3 = param_2 & 0x80000000;
  uVar5 = (ulonglong)(((uint)param_2 & 0x7fffffff) >> (0x20U - param_1[0x28] & 0x3f));
  param_2 = 0xffffffff >> (param_1[0x28] & 0x3fU) & param_2;
LAB_82d420ac:
  do {
    param_2 = param_2 + 1;
    if ((int)uVar3 == 0) {
      if (*(int *)(param_1[0x29] + (int)((uVar5 + (uVar5 & 0x7fffffff) * 2 & 0xffffffff) << 5) +
                  0x14) <= (int)param_2) {
        uVar5 = uVar5 + 1;
        param_2 = 0;
        if ((ulonglong)(uint)param_1[0x2a] <= (uVar5 & 0xffffffff)) {
          if (param_1[0x2d] == 0) {
            return 0xffffffffffffffff;
          }
          uVar3 = 0xffffffff80000000;
          uVar5 = 0;
          param_2 = 0xffffffffffffffff;
          goto LAB_82d420ac;
        }
      }
    }
    else if (*(int *)(param_1[0x2c] + (int)((uVar5 & 0xffffffff) << 6) + 0x18) <= (int)param_2) {
      uVar5 = uVar5 + 1;
      if ((ulonglong)(uint)param_1[0x2d] <= (uVar5 & 0xffffffff)) {
        return 0xffffffffffffffff;
      }
      param_2 = 0;
    }
    uVar4 = (uint)((int)uVar5 << (0x20U - param_1[0x28] & 0x3f)) | uVar3 | param_2;
    iVar1 = (**(code **)(*param_1 + 0x14))(param_1,uVar4,auStack_240);
    if (*(int *)(iVar1 + 0xc) != 3) {
      return uVar4;
    }
    pcVar2 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_250,iVar1 + 0x20,iVar1 + 0x30,
                                  iVar1 + 0x40);
    if (*pcVar2 == '\0') {
      return uVar4;
    }
  } while( true );
}

