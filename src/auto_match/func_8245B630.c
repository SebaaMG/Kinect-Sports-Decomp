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
extern int fn_8245AB78();
extern int fn_82A1DD38();
extern int fn_82F68CC0();
extern unsigned int uStack_3c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8245B630(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  code *pcStack_40;
  undefined4 uStack_3c;
  
  RtlEnterCriticalSection();
  if ((*(int *)(param_1 + 0x588) != 0) && (*(int *)(param_1 + 0x6a4) == 3)) {
    RtlLeaveCriticalSection(param_1);
    auStack_60[0] = 3;
    fn_82A1DD38(param_2,auStack_60,1);
    uStack_4c = (undefined4)param_2;
    uStack_50 = 1;
    pcStack_40 = fn_8245AB78;
    uStack_48 = uStack_4c;
    uStack_44 = param_3;
    uStack_3c = param_4;
    RtlEnterCriticalSection(param_1);
    if ((*(int *)(param_1 + 0x574) != 0) || (bVar1 = true, *(int *)(param_1 + 0x578) != 0)) {
      bVar1 = false;
    }
    if (bVar1) {
      fn_82F68CC0(param_1 + 0x5c4,&uStack_50,0x18);
      *(undefined4 *)(param_1 + 0x574) = 1;
      RtlLeaveCriticalSection(param_1);
      return param_2;
    }
  }
  RtlLeaveCriticalSection(param_1);
  return 0;
}

