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
extern int fn_82D04AB8();
extern int fn_82D04B90();


void fn_82E0E830(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = (float *)(param_1 + 0x10);
  while (iVar1 = param_3, param_2 - 1U < 0x20) {
    switch(*(undefined4 *)((param_2 - 1U) * 4 + -0x7d1f178c)) {
    case 0x82e0e8f4:
      param_3 = 0;
      param_2 = iVar1;
      break;
    case 0x82e0e90c:
      if (*(char *)pfVar2 != '\0') {
        fn_82D04AB8(param_4,0xffffffff82196f18);
        return;
      }
      fn_82D04AB8(param_4,0xffffffff82196f10);
      return;
    case 0x82e0e938:
      fn_82D04B90(param_4,0xffffffff8214b020,*(char *)pfVar2);
      return;
    case 0x82e0e950:
      fn_82D04B90(param_4,0xffffffff821c54fc,*(char *)pfVar2);
      return;
    case 0x82e0e968:
      fn_82D04B90(param_4,0xffffffff821c7f34,*(char *)pfVar2);
      return;
    case 0x82e0e97c:
      fn_82D04B90(param_4,0xffffffff821c54fc,*(undefined2 *)pfVar2);
      return;
    case 0x82e0e994:
      fn_82D04B90(param_4,0xffffffff821c7f34,*(undefined2 *)pfVar2);
      return;
    case 0x82e0e9a8:
      fn_82D04B90(param_4,0xffffffff821c54fc,*pfVar2);
      return;
    case 0x82e0e9bc:
      fn_82D04B90(param_4,0xffffffff821c7f34,*pfVar2);
      return;
    case 0x82e0e9d0:
      fn_82D04B90(param_4,0xffffffff82132db0,*(undefined8 *)pfVar2);
      return;
    case 0x82e0e9e4:
      fn_82D04B90(param_4,0xffffffff82132db8,*(undefined8 *)pfVar2);
      return;
    case 0x82e0e9f8:
      fn_82D04B90(param_4,0xffffffff8214b01c,(double)*pfVar2);
      return;
    case 0x82e0ea14:
      fn_82D04B90(param_4,0xffffffff8214b01c,(double)(float)((uint)*(ushort *)pfVar2 << 0x10))
      ;
      goto switchD_82e0e870_caseD_82e0eba8;
    case 0x82e0ea3c:
      fn_82D04B90(param_4,0xffffffff8214b004,(double)*pfVar2,
                        (double)*(float *)(param_1 + 0x14),(double)*(float *)(param_1 + 0x18),
                        (double)*(float *)(param_1 + 0x1c));
      return;
    case 0x82e0ea7c:
      fn_82D04B90(param_4,0xffffffff8214afc4,(double)*pfVar2,
                        (double)*(float *)(param_1 + 0x14),(double)*(float *)(param_1 + 0x18),
                        (double)*(float *)(param_1 + 0x1c),(double)*(float *)(param_1 + 0x20),
                        (double)*(float *)(param_1 + 0x24));
      return;
    case 0x82e0eb04:
      fn_82D04B90(param_4,0xffffffff8214af70,(double)*pfVar2,
                        (double)*(float *)(param_1 + 0x14),(double)*(float *)(param_1 + 0x18),
                        (double)*(float *)(param_1 + 0x1c),(double)*(float *)(param_1 + 0x20),
                        (double)*(float *)(param_1 + 0x24));
      return;
    case 0x82e0eba8:
      goto switchD_82e0e870_caseD_82e0eba8;
    }
  }
switchD_82e0e870_caseD_82e0eba8:
  return;
}

