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
extern unsigned int *auStack_30;
extern int fn_8267BE38();
extern int fn_8267BED0();


void fn_82715660(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  undefined4 auStack_30 [12];
  
  iVar1 = param_1[0x28];
  if (param_2 == (undefined4 *)0x0) {
    fn_8267BE38();
    param_1[0x28] = 0;
    bVar4 = *(byte *)((int)param_1 + 0x66) & 0xfe;
  }
  else {
    if (iVar1 == 0) {
      auStack_30[0] = 0x109;
      iVar3 = fn_8267BED0(param_1,0x10,auStack_30);
      param_1[0x28] = iVar3;
    }
    puVar2 = (undefined4 *)param_1[0x28];
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    bVar4 = *(byte *)((int)param_1 + 0x66) | 1;
  }
  *(byte *)((int)param_1 + 0x66) = bVar4;
  iVar3 = (**(code **)(*param_1 + 0x40))(param_1);
  *(uint *)(iVar3 + 0xb00) = *(uint *)(iVar3 + 0xb00) | 0x400;
  if ((iVar1 != 0) != (param_2 != (undefined4 *)0x0)) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  return;
}

