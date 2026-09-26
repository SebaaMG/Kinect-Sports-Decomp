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


void fn_829AF340(int param_1,int *param_2)

{
  short sVar1;
  byte bVar2;
  
  if ((*(uint *)(param_1 + 0x560) & 0x1000) != 0) {
    if (*(byte *)((int)param_2 + 0x19) == 3) {
      sVar1 = *(short *)(param_1 + 0x60a);
      *(undefined1 *)(param_2 + 6) = 8;
      *(undefined2 *)((int)param_2 + 0x16) = 0;
      *(byte *)((int)param_2 + 0x19) = (-(sVar1 != 0) & 4U) + 2;
    }
    else {
      if (*(short *)(param_1 + 0x60a) != 0) {
        *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 4;
      }
      if (*(byte *)(param_2 + 6) < 8) {
        *(undefined1 *)(param_2 + 6) = 8;
      }
      *(undefined2 *)((int)param_2 + 0x16) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x560) & 0x2000) != 0) {
    param_2[10] = *(int *)(param_1 + 0x630);
  }
  if (((*(uint *)(param_1 + 0x560) & 0x400) != 0) && (*(char *)(param_2 + 6) == '\x10')) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  if (((*(uint *)(param_1 + 0x560) & 0x40) != 0) &&
     ((((*(char *)((int)param_2 + 0x19) == '\x02' || (*(char *)((int)param_2 + 0x19) == '\x06')) &&
       (*(int *)(param_1 + 0x674) != 0)) && (*(char *)(param_2 + 6) == '\b')))) {
    *(undefined1 *)((int)param_2 + 0x19) = 3;
  }
  if (((*(uint *)(param_1 + 0x560) & 4) != 0) && (*(byte *)(param_2 + 6) < 8)) {
    *(undefined1 *)(param_2 + 6) = 8;
  }
  bVar2 = *(byte *)((int)param_2 + 0x19);
  if ((bVar2 == 3) || ((bVar2 & 2) == 0)) {
    *(undefined1 *)((int)param_2 + 0x1d) = 1;
  }
  else {
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
  }
  if ((bVar2 & 4) != 0) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  if (((*(uint *)(param_1 + 0x560) & 0x8000) != 0) && ((bVar2 == 2 || (bVar2 == 0)))) {
    *(char *)((int)param_2 + 0x1d) = *(char *)((int)param_2 + 0x1d) + '\x01';
  }
  bVar2 = *(char *)(param_2 + 6) * *(char *)((int)param_2 + 0x1d);
  *(byte *)((int)param_2 + 0x1e) = bVar2;
  param_2[3] = (uint)bVar2 * *param_2 + 7 >> 3;
  return;
}

