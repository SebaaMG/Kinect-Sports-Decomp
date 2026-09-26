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
extern int fn_822DB770();
extern int fn_8265CAA0();
extern int fn_82D7E470();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_822DD080(uint *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  int aiStack_50 [2];
  uint uStack_48;
  uint uStack_44;
  int aiStack_40 [2];
  uint uStack_38;
  uint uStack_34;
  int aiStack_30 [2];
  uint uStack_28;
  uint uStack_24;
  
  fn_822DB770(aiStack_30);
  uStack_24 = param_2[3];
  fn_822DB770(aiStack_50,aiStack_30);
  uStack_44 = uStack_24;
  cVar2 = fn_82D7E470(aiStack_50);
  if (cVar2 == '\0') {
    fn_822DB770(aiStack_40,aiStack_50);
    uStack_34 = uStack_44;
    if (param_1 + 2 != (uint *)0x0) {
      fn_822DB770(param_1 + 2,aiStack_40);
      param_1[5] = uStack_34;
    }
    if ((8 < uStack_38) && (aiStack_40[0] != 0)) {
      fn_8265CAA0();
    }
    if ((8 < uStack_48) && (aiStack_50[0] != 0)) {
      fn_8265CAA0();
    }
    bVar1 = 1;
  }
  else {
    if ((8 < uStack_48) && (aiStack_50[0] != 0)) {
      fn_8265CAA0();
    }
    bVar1 = 0;
  }
  if ((8 < uStack_28) && (aiStack_30[0] != 0)) {
    fn_8265CAA0();
  }
  *param_1 = -(uint)bVar1 & 0x831d9098;
  if ((8 < (uint)param_2[2]) && (*param_2 != 0)) {
    fn_8265CAA0();
  }
  return;
}

