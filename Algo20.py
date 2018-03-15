'''
문자열 형식으로 입력 받은 모스코드(dot: . dash:-)를 해독하여 영어 문장으로 출력하는 프로그램을 작성하시오.

글자와 글자 사이는 공백 하나, 단어와 단어 사이는 공백 두개로 구분한다.
'''
a = '.... .  ... .-.. . . .--. ...  . .- .-. .-.. -.--'

morseData = {
        '.-': 'a', '-...': 'b', '-.-.': 'c', '-..': 'd', '.': 'e', '..-.': 'f',
        '--.': 'g', '....': 'h', '..': 'i', '.---': 'j', '-.-': 'k', '.-..': 'l',
        '--': 'm', '-.': 'n', '---': 'o', '.--.': 'p', '--.-': 'q', '.-.': 'r',
        '...': 's', '-': 't', '..-': 'u', '...-': 'v', '.--': 'w', '-..-': 'x',
        '-.--': 'y', '--..': 'z'
    }

def morse(data):
    result = []

    for word in data.split("  "):
        for char in word.split(" "):
            result.append(morseData[char])
        result.append(" ")
    return "".join(result)


if __name__ == '__main__':
    print(morse(a))