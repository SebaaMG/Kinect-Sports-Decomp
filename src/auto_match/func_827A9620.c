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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826C6368();


void fn_827A9620(int param_1,longlong param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  
  if ((int)param_2 != 0) {
    puVar3 = (ushort *)(param_1 + 6);
    puVar4 = (undefined4 *)(param_3 + -4);
    do {
      if ((*puVar3 >> 0xe & 1) != 0) {
        if ((*puVar3 >> 0xd & 1) != 0) {
          puVar1 = (uint *)puVar4[1];
          uVar2 = *puVar1;
          *puVar1 = (uint)((ulonglong)uVar2 - 1);
          if ((ulonglong)uVar2 - 1 == 0) {
            fn_826C6368(puVar1);
            fn_8267BE38(puVar1);
          }
          puVar4 = puVar4 + 1;
        }
        if ((*puVar3 >> 0xc & 1) != 0) {
          puVar4 = puVar4 + 1;
        }
        if ((*puVar3 >> 0xb & 1) != 0) {
          puVar4 = puVar4 + 1;
          fn_8267C498(*puVar4);
        }
      }
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 4;
    } while (param_2 != 0);
  }
  return;
}

