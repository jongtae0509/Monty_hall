# Monty_hall
유튜브를 보다가 몬티 홀 문제를 알게되어 c언어로 코드를 짜서 확인해보았다<br><br>

## 몬티 홀 문제란?
#### 당신이 한 게임 쇼에 참여하여 세 문들 중 하나를 고를 기회를 가졌다고 생각해봐라. 한 문 뒤에는 자동차가 있으며, 다른 두 문 뒤에는 염소가 있다. 당신은 1번 문을 고르고, 문 뒤에 무엇이 있는지 아는 사회자는 염소가 있는 3번 문을 연다. 그는 당신에게 "2번 문을 고르고 싶습니까?"라고 묻는다. 당신의 선택을 바꾸는 것은 이득이 되는가?<br>
이런 내용의 '몬티 홀'이라는 미국/캐나다 TV 프로그램 사회자가 진행하던 미국 오락 프로그램 《Let's Make a Deal》에서 유래한 확률 문제이다

## 문제 구현하기
1. 랜덤함수를 사용해 자동차가 들어있는 문을 랜덤으로 뽑고 , 또 플레이어가 선택하는 문을 랜덤으로 뽑는다. 
2. 자동차가 있거나 플레이어가 고른 문은 제외하고 랜덤으로 문을 열어 그곳에 염소가 있는걸 보여준다.
3. 플레이어는 선택을 바꾼다.
4. 그 바꾼 선택이 자동차가 있는 문이면 승, 염소가 있는 문이면 패로 승패를 기록한다. (바꾸지 않은경우는 반대)

이런식으로 구현해 봤고 코드는 [여기서](https://github.com/jongtae0509/Monty_hall/blob/master/%EB%AA%AC%ED%8B%B0%ED%99%80.c) 확인 할 수 있다

## 결과

![2022-05-06 05 21 41](https://user-images.githubusercontent.com/61003779/167020798-57fd414a-97c5-4e35-a29c-3b287cae2e7b.png)
<br>21억번 시뮬레이터를 돌려본 결과 선택을 바꿀시 바꾸지 않은 경우보다 승률이 약 33.333%p정도가 증가한것을 알 수 있다.
<br>이로써 몬티 홀 문제에서는 선택을 바꾸는것이 이득이라고 할 수 있다.

다양한 해설을 정리해놓은 [블로그](https://blog.naver.com/jjaprince/220278302374)에 들어가보면 선택을 바꾸었을때의 자동차를 고를 확률은 2/3이라고 한다.<br>
21억번 시뮬레이션을 돌려봤을때 승률이 66.666987%였으니 거의 확률에 근접하게 나왔다.<br>
이런 확률문제를 직접 프로그램으로 구현해서 돌려보니까 재미있었다. 다른 확률문제도 구현해보고 싶다.
