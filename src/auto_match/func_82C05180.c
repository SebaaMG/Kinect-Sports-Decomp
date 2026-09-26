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


undefined8 fn_82C05180(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        return 0xffffffff80004005;
      }
      uVar6 = (**(code **)(*param_1 + 100))
                        (param_1,param_2[2],*(undefined8 *)(param_2 + 4),
                         *(undefined8 *)(param_2 + 6),param_2[8],param_2[9],param_2[10],param_2[0xb]
                        );
      goto LAB_82c051d4;
    }
    uVar1 = param_2[0xb];
    uVar2 = param_2[10];
    uVar3 = param_2[9];
    uVar4 = param_2[8];
    pcVar5 = *(code **)(*param_1 + 0x68);
  }
  else {
    uVar1 = param_2[0xb];
    uVar2 = param_2[10];
    uVar3 = param_2[9];
    uVar4 = param_2[8];
    pcVar5 = *(code **)(*param_1 + 0x6c);
  }
  uVar6 = (*pcVar5)(param_1,param_2[2],param_2[3],uVar4,uVar3,uVar2,uVar1);
LAB_82c051d4:
  if (-1 < (int)uVar6) {
    param_1[0x1e] = *param_2;
  }
  return uVar6;
}

