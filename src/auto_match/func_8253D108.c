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
extern int fn_825269D0();
extern int fn_8253C720();
extern int fn_8257C8F0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8253D108(int *param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(int *)(param_2 + 0x1f8) != 0) && (param_1[0x3c] == 0)) {
    param_1[0x3c] = 1;
    while( true ) {
      piVar2 = (int *)fn_82599308();
      if (*piVar2 == 0) break;
      fn_82A1BB18();
      lVar1 = fn_8259A230();
      fn_825269D0(lVar1 + 0x23,0);
    }
    fn_8253C720(param_1[8],param_2);
    if (*param_1 != 0) {
      uStack_20 = 0x3d;
      uStack_1c = 8;
      fn_8257C8F0(param_2,&uStack_20);
      *param_1 = 0;
    }
  }
  return;
}

