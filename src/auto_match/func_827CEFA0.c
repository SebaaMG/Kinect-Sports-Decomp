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
extern int fn_827CE9B8();
extern int fn_827CEA88();
extern int fn_827CEC48();
extern int fn_827CEE68();


void fn_827CEFA0(int *param_1,char param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  
  if (param_2 != '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)();
  }
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x40);
  param_1[0x51] = (int)puVar2;
  *puVar2 = fn_827CE9B8;
  if (*(char *)(param_1[0x55] + 8) == '\0') {
    iVar5 = 0;
    puVar2[1] = fn_827CEA88;
    if (0 < param_1[0xf]) {
      piVar6 = (int *)(param_1[0x11] + -0x38);
      puVar2 = puVar2 + 1;
      do {
        uVar1 = piVar6[0x10];
        piVar6 = piVar6 + 0x15;
        trapWord(6,(ulonglong)uVar1,0);
        uVar4 = ((longlong)param_1[0x36] * (longlong)*piVar6 & 0x1fffffffU) << 3;
        trapWord(5,(ulonglong)uVar1 &
                   ~(((uVar4 & 0x7fffffff) << 1 |
                     ((longlong)param_1[0x36] * (longlong)*piVar6 & 0x1fffffffU) >> 0x1c) - 1),
                 0xffff);
        uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,(int)uVar4 / (int)uVar1,param_1[0x37]);
        iVar5 = iVar5 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = uVar3;
      } while (iVar5 < param_1[0xf]);
    }
  }
  else {
    puVar2[1] = fn_827CEC48;
    fn_827CEE68(param_1);
  }
  return;
}

